PORTNAME=	argobots
DISTVERSIONPREFIX=	v
DISTVERSION=	1.2
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Lightweight, low-level threading and tasking framework
WWW=		https://www.argobots.org/

LICENSE=	BSD4CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

BUILD_DEPENDS=	ggrep:textproc/gnugrep # workaround for https://github.com/pmodels/argobots/issues/375

USES=		autoreconf gmake libtool
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	pmodels

INSTALL_TARGET=	install-strip

BINARY_ALIAS=	grep=ggrep # for https://github.com/pmodels/argobots/issues/375

PLIST_FILES=	include/abt.h \
		lib/libabt.a \
		lib/libabt.so \
		lib/libabt.so.1 \
		lib/libabt.so.1.1.0 \
		libdata/pkgconfig/argobots.pc

do-test: # at least one test never finishes, see https://github.com/pmodels/argobots/issues/376
	@cd ${WRKSRC}/test && \
		${GMAKE} check

.include <bsd.port.mk>
