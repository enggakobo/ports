PORTNAME=	uptime
PORTVERSION=	3.0.1
PORTREVISION=	1
CATEGORIES=	sysutils python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	uros@gruber.si
COMMENT=	Cross-platform uptime library
WWW=		https://github.com/Cairnarvon/uptime

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING.txt

USES=		python
USE_PYTHON=	autoplist distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/uptime/_posix*.so

.include <bsd.port.mk>
