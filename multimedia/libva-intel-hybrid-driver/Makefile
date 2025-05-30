PORTNAME=	intel-hybrid-driver
DISTVERSION=	1.0.2
PORTREVISION=	3
CATEGORIES=	multimedia
PKGNAMEPREFIX=	libva-

PATCH_SITES=	https://github.com/${GH_ACCOUNT}/${GH_PROJECT}/commit/
PATCHFILES+=	dfa9c8eba295.patch:-p1
PATCHFILES+=	b3b4d9a3a08d.patch:-p1 # https://github.com/intel/intel-hybrid-driver/pull/26
PATCHFILES+=	821f87129662.patch:-p1 # https://github.com/intel/intel-hybrid-driver/pull/28
PATCHFILES+=	7de7270e7f96.patch:-p1 # https://github.com/intel/intel-hybrid-driver/pull/32

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Hybrid VP8 encoder and VP9 decoder for Intel GPUs
WWW=		https://01.org/linuxmedia

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

ONLY_FOR_ARCHS=	amd64 i386
ONLY_FOR_ARCHS_REASON=	only Intel GPUs on x86 are supported

LIB_DEPENDS=	libdrm_intel.so:graphics/libdrm \
		libcmrt.so:multimedia/cmrt \
		libva.so:multimedia/libva

USES=		autoreconf compiler:c11 gmake libtool pkgconfig
USE_CXXSTD=	gnu++98
USE_GITHUB=	yes
GH_ACCOUNT=	irql-notlessorequal
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
PLIST_FILES=	lib/dri/hybrid_drv_video.so

OPTIONS_DEFINE=	WAYLAND X11
OPTIONS_DEFAULT=WAYLAND X11

WAYLAND_LIB_DEPENDS=	libva-wayland.so:multimedia/libva
WAYLAND_CONFIGURE_ENABLE=	wayland

X11_LIB_DEPENDS=	libva-x11.so:multimedia/libva
X11_CONFIGURE_ENABLE=	x11

post-patch:
	@${REINPLACE_CMD} -e '/__linux__/d; /LINUX/d' \
		${WRKSRC}/src/vp9hdec/Makefile.am

.include <bsd.port.mk>
