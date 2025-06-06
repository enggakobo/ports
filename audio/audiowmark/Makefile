PORTNAME=	audiowmark
PORTVERSION=	0.6.5
CATEGORIES=	audio

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Audio and video watermarking tool
WWW=		https://github.com/swesterfeld/audiowmark

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN_FreeBSD_13=	compilation fails: error: static declaration of '__builtin_bswap32' follows non-static declaration

BUILD_DEPENDS=	${LOCALBASE}/include/fftw3.h:math/fftw3 \
		autoconf-archive>=0:devel/autoconf-archive
LIB_DEPENDS=	libfftw3f.so:math/fftw3-float \
		libgcrypt.so:security/libgcrypt \
		libgpg-error.so:security/libgpg-error \
		libmpg123.so:audio/mpg123 \
		libsndfile.so:audio/libsndfile \
		libzita-resampler.so:audio/zita-resampler

USES=		autoreconf gettext-tools libtool localbase:ldflags pkgconfig \
		shebangfix
USE_GITHUB=	yes
GH_ACCOUNT=	swesterfeld

SHEBANG_FILES=	src/videowmark

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/audiowmark \
		bin/videowmark
PORTDOCS=	README.adoc

OPTIONS_DEFINE=		DOCS FFMPEG
OPTIONS_DEFAULT=	FFMPEG

FFMPEG_LIB_DEPENDS=	libavcodec.so:multimedia/ffmpeg
FFMPEG_CONFIGURE_ON=	--with-ffmpeg

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.adoc ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
