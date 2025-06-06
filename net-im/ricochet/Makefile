PORTNAME=	ricochet
PORTVERSION=	1.1.4
DISTVERSIONPREFIX=	v
PORTREVISION=	37
CATEGORIES=	net-im net-p2p

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Anonymous peer-to-peer instant messenger
WWW=		https://github.com/ricochet-im/ricochet

LICENSE=	RICOCHET
LICENSE_NAME=	Ricochet
LICENSE_FILE=	${WRKSRC}/LICENSE
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

LIB_DEPENDS=	libprotobuf.so:devel/protobuf

USES=		compiler:c++17-lang gl gmake pkgconfig qmake qt:5 ssl
USE_GITHUB=	yes
GH_ACCOUNT=	ricochet-im
USE_QT=		core declarative gui multimedia network quickcontrols widgets \
		buildtools:build linguisttools:build
USE_GL=		gl

USE_CXXSTD=	c++17
QMAKE_ARGS+=	DEFINES+=RICOCHET_NO_PORTABLE OPENSSLDIR=${OPENSSLBASE}

OPTIONS_DEFINE=	TOR
OPTIONS_DEFAULT=	TOR
TOR_DESC=	Install Tor: it is required for ${PORTNAME} to run

TOR_RUN_DEPENDS=	tor:security/tor

PLIST_FILES=	bin/ricochet \
		share/applications/ricochet.desktop \
		share/icons/hicolor/48x48/apps/ricochet.png \
		share/icons/hicolor/scalable/apps/ricochet.svg

post-patch:
	@${REINPLACE_CMD} -E 's| -fsanitize=[a-z-]+| |g' \
		${WRKSRC}/hardened.pri

.include <bsd.port.mk>
