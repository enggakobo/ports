PORTNAME=	xoscope
PORTVERSION=	2.0
PORTREVISION=	4
CATEGORIES=	audio hamradio
MASTER_SITES=	SF

MAINTAINER=	db@FreeBSD.org
COMMENT=	Sound card oscilloscope
WWW=		https://xoscope.sourceforge.net/

LICENSE=	GPLv1
LICENSE_FILE=	${WRKSRC}/README

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=	${PREFIX}/share
CONFIGURE_ARGS=	--prefix=${STAGEDIR}${PREFIX} --sysconfdir=${STAGEDIR}${PREFIX}
USES=		gmake gnome pkgconfig tar:tgz xorg
USE_GNOME=	cairo gdkpixbuf gtk20
USE_XORG=	x11

.include <bsd.port.mk>
