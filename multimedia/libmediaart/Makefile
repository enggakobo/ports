PORTNAME=	libmediaart
DISTVERSION=	1.9.6
CATEGORIES=	multimedia devel
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Library for handling media art
WWW=		https://www.gnome.org/

LICENSE=	GPLv2 LGPL21
LICENSE_COMB=	dual
LICENSE_FILE_GPLv2=	${WRKSRC}/COPYING
LICENSE_FILE_LGPL21=	${WRKSRC}/COPYING.LESSER

USES=		gnome meson pathfix pkgconfig tar:xz vala:build
USE_GNOME=	gdkpixbuf introspection:build
USE_LDCONFIG=	yes

MESON_ARGS=	-Dimage_library=gdk-pixbuf -Dgtk_doc=false

.include <bsd.port.mk>
