PORTNAME=	octave-forge-image
PORTVERSION=	2.16.1
CATEGORIES=	math
MASTER_SITES=	SF/octave/Octave%20Forge%20Packages/Individual%20Package%20Releases
DISTNAME=	${OCTAVE_PKGNAME}-${DISTVERSIONFULL}

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}
WWW=		https://packages.octave.org/

LICENSE=	Many
LICENSE_NAME=	Many different licenses
LICENSE_FILE=	${WRKDIR}/${OCTAVE_SRC}/COPYING
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

USES=		compiler:c++14-lang octave

GNU_CONFIGURE=	yes
CXXFLAGS+=	-fPIC

.include <bsd.port.mk>
