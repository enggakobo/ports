PORTNAME=	azure-storage
PORTVERSION=	0.36.0
PORTREVISION=	2
CATEGORIES=	www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	vladimirv@ixsystems.com
COMMENT=	Python Client for Azure Storage
WWW=		https://pypi.org/project/azure-storage/

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}azure-common>0:www/py-azure-common@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}python-dateutil>0:devel/py-python-dateutil@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>0:www/py-requests@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent cryptography distutils

NO_ARCH=	yes

.include <bsd.port.mk>
