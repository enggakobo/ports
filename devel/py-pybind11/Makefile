PORTNAME=	pybind11
DISTVERSION=	2.13.6
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Seamless interoperability between C++11 and Python
WWW=		https://pybind11.readthedocs.io/en/stable/ \
		https://github.com/pybind/pybind11

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PY_SETUPTOOLS} \
		${PYTHON_PKGNAMEPREFIX}wheel>0:devel/py-wheel@${PY_FLAVOR}

USES=		python
USE_PYTHON=	pep517 concurrent autoplist

NO_ARCH=	yes

.include <bsd.port.mk>
