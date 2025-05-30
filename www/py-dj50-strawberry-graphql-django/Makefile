PORTNAME=	strawberry-graphql-django
DISTVERSION=	0.58.0
CATEGORIES=	www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}dj50-
DISTNAME=	strawberry_graphql_django-${DISTVERSION}

MAINTAINER=	kai@FreeBSD.org
COMMENT=	Strawberry GraphQL Django extension
WWW=		https://github.com/strawberry-graphql/strawberry-django

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Extended support of Django 5.0 ends April 2025, upgrade to the Django 5.1+ version of this port. See https://www.djangoproject.com/download/
EXPIRATION_DATE=2025-05-31

BUILD_DEPENDS=	${PY_SETUPTOOLS} \
		${PYTHON_PKGNAMEPREFIX}poetry-core>=1.0.0:devel/py-poetry-core@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django50>=4.2:www/py-django50@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}asgiref>=3.8:www/py-asgiref@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}dj50-strawberry-graphql>=0.258.0:devel/py-dj50-strawberry-graphql@${PY_FLAVOR}

USES=		python:3.10+
USE_PYTHON=	autoplist pep517

CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}*${PORTNAME}

NO_ARCH=	yes

OPTIONS_DEFINE=		DEBUG-TOOLBAR ENUM
OPTIONS_DEFAULT=	DEBUG-TOOLBAR ENUM

DEBUG-TOOLBAR_DESC=	Debug support
ENUM_DESC=		Integration for Django's TextChoices/IntegerChoices enumerations

DEBUG-TOOLBAR_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dj50-django-debug-toolbar>=3.4:www/py-dj50-django-debug-toolbar@${PY_FLAVOR}
ENUM_RUN_DEPENDS=		${PYTHON_PKGNAMEPREFIX}dj50-django-choices-field>=2.2.2:www/py-dj50-django-choices-field@${PY_FLAVOR}

.include <bsd.port.mk>
