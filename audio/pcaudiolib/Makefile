PORTNAME=	pcaudiolib
DISTVERSION=	1.2
PORTREVISION=	2
CATEGORIES=	audio
MASTER_SITES=	https://github.com/${GH_ACCOUNT}/${PORTNAME}/releases/download/${DISTVERSION}/

MAINTAINER=	se@FreeBSD.org
COMMENT=	Portable C audio library
WWW=		https://github.com/espeak-ng/pcaudiolib

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		libtool pkgconfig
#USE_GITHUB=	yes
GH_ACCOUNT=	espeak-ng
GNU_CONFIGURE=	yes

OPTIONS_DEFAULT=	OSS
OPTIONS_MULTI=		BACKEND
OPTIONS_MULTI_BACKEND=	ALSA OSS PULSEAUDIO

ALSA_LIB_DEPENDS=	libasound.so:audio/alsa-lib
PULSEAUDIO_LIB_DEPENDS=	libpulse.so:audio/pulseaudio

ALSA_CONFIGURE_WITH=		alsa
OSS_CONFIGURE_WITH=		oss
PULSEAUDIO_CONFIGURE_WITH=	pulseaudio

.include <bsd.port.mk>
