PORTNAME=	gvgen
PORTVERSION=	1.0
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	graphics python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	Easy python interface to generate dot files
WWW=		https://github.com/stricaud/gvgen

LICENSE=	GPLv2

USES=		python
USE_PYTHON=	distutils autoplist
USE_GITHUB=	yes
GH_ACCOUNT=	stricaud
NO_ARCH=	yes

OPTIONS_DEFINE=	DOCS

PORTDOCS=	crypto-folks.png gvgen-legend.png gvgen-propertyforeachlinks.2.png \
		gvgen-smartmode-2.png gvgen-cluster-node-link.png gvgen-legendin.png \
		gvgen-propertylink.png gvgen-styles.png gvgen-defaultstyle.png \
		gvgen-links.png gvgen-smartmode-1.png

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/doc/${f} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
