PORTNAME=	text
PORTVERSION=	0.8
PORTREVISION=	3
CATEGORIES=	textproc
PKGNAMEPREFIX=	ocaml-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	OCaml library for dealing with text
WWW=		https://forge.ocamlcore.org/projects/ocaml-text/

BUILD_DEPENDS=	ocamlbuild:devel/ocaml-ocamlbuild

USES=		gmake ocaml:camlp4,findplist,ldconfig
USE_GITHUB=	yes
GH_ACCOUNT=	vbmithr
GH_PROJECT=	${PKGNAMEPREFIX}${PORTNAME}

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix ${PREFIX} \
		--destdir ${STAGEDIR}

SA_DIR=		${LOCALBASE}/${OCAML_SITELIBDIR}
DOCSDIR=	${PREFIX}/share/doc/${PKGNAMEPREFIX}${PORTNAME}

OPTIONS_DEFINE=		PCRE
OPTIONS_DEFAULT=	PCRE

PCRE_CONFIGURE_ENABLE=	pcre
PCRE_BUILD_DEPENDS=	${SA_DIR}/pcre/pcre.a:devel/ocaml-pcre
PCRE_RUN_DEPENDS=	${SA_DIR}/pcre/pcre.a:devel/ocaml-pcre

.include <bsd.port.options.mk>

.if ${ARCH} == powerpc
USE_BINUTILS=	yes
.endif

post-patch:
	@${REINPLACE_CMD} -e 's,"install" :: findlib_name,"install" :: "-destdir ${STAGEDIR}${PREFIX}/lib/ocaml/site-lib" :: "-ldconf /dev/null" :: findlib_name,' \
		${WRKSRC}/setup.ml

do-configure:
	cd ${WRKSRC}; ocaml setup.ml -configure ${CONFIGURE_ARGS}

do-build:
	cd ${WRKSRC}; ocaml setup.ml -build

do-install:
	${MKDIR} ${STAGEDIR}${OCAMLFIND_DESTDIR}
	cd ${WRKSRC}; ocaml setup.ml -install

.include <bsd.port.mk>
