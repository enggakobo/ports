PORTNAME=	maxminddb
PORTVERSION=	1.6.0
DISTVERSIONPREFIX=	v
CATEGORIES=	devel net
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	MaxMind DB Reader extension for PHP
WWW=		https://github.com/maxmind/MaxMind-DB-Reader-php

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/../LICENSE

LIB_DEPENDS=	libmaxminddb.so:net/libmaxminddb

USES=		compiler:c11 localbase:ldflags php:ext

USE_GITHUB=	yes
GH_ACCOUNT=	maxmind
GH_PROJECT=	MaxMind-DB-Reader-php

WRKSRC_SUBDIR=	ext

.include <bsd.port.mk>
