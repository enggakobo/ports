PORTNAME=	strategies
DISTVERSION=	0.2.3
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Programmatic control flow
WWW=		https://github.com/logpy/strategies

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}multipledispatch>0:devel/py-multipledispatch@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}toolz>0:devel/py-toolz@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
