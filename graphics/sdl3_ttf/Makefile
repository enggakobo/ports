PORTNAME=	sdl3_ttf
DISTVERSIONPREFIX=	preview-
DISTVERSION=	3.1.0
CATEGORIES=	graphics

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Library to use TrueType fonts to render text in SDL applications
WWW=		https://github.com/libsdl-org/SDL_ttf

LICENSE=	ZLIB
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libfreetype.so:print/freetype2

USES=		cmake sdl
USE_GITHUB=	yes
GH_ACCOUNT=	libsdl-org
GH_PROJECT=	SDL_ttf
USE_SDL=	sdl3
CMAKE_OFF=	SDLTTF_SAMPLES
USE_LDCONFIG=	yes

PORTDOCS=	*

OPTIONS_DEFINE=	HARFBUZZ DOCS
OPTIONS_DEFAULT=HARFBUZZ
OPTIONS_SUB=	yes

HARFBUZZ_DESC=	Enable HarfBuzz support
HARFBUZZ_LIB_DEPENDS=	libharfbuzz.so:print/harfbuzz
HARFBUZZ_CMAKE_BOOL=	SDLTTF_HARFBUZZ

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/CHANGES.txt ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
