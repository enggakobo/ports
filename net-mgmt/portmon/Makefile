PORTNAME=	portmon
PORTVERSION=	2.0
PORTREVISION=	2
CATEGORIES=	net-mgmt
MASTER_SITES=	http://voodoo.bawue.com/download/ \
		http://www.aboleo.net/software/portmon/downloads/ \
		http://www.bayofrum.net/dist/${PORTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Daemon that monitor network services
WWW=		http://www.aboleo.net/software/portmon

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
LIBS+=		-lutil

PLIST_FILES=	bin/portmon etc/portmon.hosts.sample share/man/man8/portmon.8.gz
PORTDOCS=	README

OPTIONS_DEFINE=	DOCS

post-build:
	@${REINPLACE_CMD} -e 's|/etc|${PREFIX}/etc|g' \
		 ${WRKSRC}/extras/${PORTNAME}.8

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/${PORTNAME} \
		${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/extras/portmon.8 \
		${STAGEDIR}${PREFIX}/share/man/man8
	${INSTALL_DATA} ${WRKSRC}/extras/portmon.hosts.sample \
		${STAGEDIR}${PREFIX}/etc

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
