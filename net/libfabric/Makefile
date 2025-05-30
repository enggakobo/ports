PORTNAME=	libfabric
DISTVERSION=	1.15.1
PORTREVISION=	4
CATEGORIES=	net
MASTER_SITES=	https://github.com/ofiwg/${PORTNAME}/releases/download/v${DISTVERSION}/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Open Fabric Interfaces
WWW=		https://ofiwg.github.io/libfabric/

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	bash:shells/bash
LIB_DEPENDS=	libepoll-shim.so:devel/libepoll-shim

USES=		gmake libtool pkgconfig tar:bz2
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
CONFIGURE_ARGS=	--disable-static
CONFIGURE_SHELL=	${LOCALBASE}/bin/bash # workaround for https://github.com/ofiwg/libfabric/issues/7901

CFLAGS+=	-I${LOCALBASE}/include/libepoll-shim
LDFLAGS+=	-L${LOCALBASE}/lib -lepoll-shim

INSTALL_TARGET=	install-strip

OPTIONS_MULTI=			PROVIDERS
OPTIONS_MULTI_PROVIDERS=	RXD RXM SOCKETS TCP UDP VERBS
OPTIONS_DEFAULT=		${OPTIONS_MULTI_PROVIDERS}
OPTIONS_EXCLUDE_armv7=		VERBS
OPTIONS_SUB=			yes
PROVIDERS_DESC=			Providers to build:

VERBS_PLIST_FILES=		share/man/man7/fi_verbs.7.gz

.for p in ${OPTIONS_MULTI_PROVIDERS}
${p}_DESC=			'${p:tl}' provider
${p}_CONFIGURE_ENABLE=		${p:tl}
.endfor

SED_WRAP_CLOSE=	{ \
		i\\\n \
		\#ifdef SHIM_SYS_SHIM_HELPERS\\\n \
		\#undef close\\\n \
		\#endif\n \
		a\\\n \
		\#ifdef SHIM_SYS_SHIM_HELPERS\\\n \
		\#define close epoll_shim_close\\\n \
		\#endif\n \
		}

post-patch:
	@${FIND} ${WRKSRC} -name "*.[ch]" -and -exec ${GREP} -q '<asm/types\.h>' {} \; -print | ${XARGS} ${REINPLACE_CMD} 's|<asm/types\.h>|<sys/types.h>|'
	@${FIND} ${WRKSRC} -name "*.[ch]" -and -exec ${GREP} -q '<malloc\.h>' {} \; -print | ${XARGS} ${REINPLACE_CMD} 's|<malloc\.h>|<stdlib.h>|'
	@${FIND} ${WRKSRC} -name "*.[ch]" -and -exec ${GREP} -q '<alloca\.h>' {} \; -print | ${XARGS} ${REINPLACE_CMD} 's|<alloca\.h>|<stdlib.h>|'
	@${GREP} -Flr --include='*.c' '.close' ${WRKSRC} | ${XARGS} ${REINPLACE_CMD} $$'/\\.close/${SED_WRAP_CLOSE}'
	@${REINPLACE_CMD} $$'/fi_ops.*close/${SED_WRAP_CLOSE}' ${WRKSRC}/src/fabric.c
	@${REINPLACE_CMD} $$'/[*>]close/${SED_WRAP_CLOSE}' ${WRKSRC}/include/rdma/fabric.h

.include <bsd.port.mk>
