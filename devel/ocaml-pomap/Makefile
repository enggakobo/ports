PORTNAME=	pomap
PORTVERSION=	4.1.1
PORTREVISION=	3
CATEGORIES=	devel
PKGNAMEPREFIX=	ocaml-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	OCaml library to maintain a list of partially ordered elements
WWW=		https://mmottl.github.io/pomap/

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/LICENSE.md

BUILD_DEPENDS=	dune:devel/ocaml-dune

USES=		ocaml
USE_GITHUB=	yes
GH_ACCOUNT=	mmottl

DOCSDIR=	${OCAML_DOCSDIR}/${PORTNAME}
EXAMPLESDIR=	${OCAML_EXAMPLESDIR}/${PORTNAME}

OPTIONS_DEFINE=	DOCS EXAMPLES

.include <bsd.port.options.mk>

.if ${ARCH} == powerpc
USE_BINUTILS=	yes
.endif

do-build:
	cd ${BUILD_WRKSRC} && dune build --verbose

do-install:
	cd ${INSTALL_WRKSRC} && dune install --destdir=${STAGEDIR} \
		--libdir=${PREFIX}/${OCAML_SITELIBDIR}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${OCAML_SITELIBDIR}/pomap/pomap.cmxs

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	@(cd ${WRKSRC}/examples && \
		${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.mk>
