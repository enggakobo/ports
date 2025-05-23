PORTNAME=	kerberos
PORTVERSION=	1.3.1
PORTREVISION=	2
CATEGORIES=	security python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	Kerberos bindings for python
WWW=		https://github.com/apple/ccs-pykerberos

LICENSE=	APACHE20

OPTIONS_DEFAULT=	GSSAPI_BASE
OPTIONS_SINGLE=		GSSAPI
OPTIONS_SINGLE_GSSAPI=	GSSAPI_BASE GSSAPI_HEIMDAL GSSAPI_MIT

GSSAPI_BASE_USES=		gssapi
GSSAPI_HEIMDAL_USES=		gssapi:heimdal
GSSAPI_MIT_USES=		gssapi:mit

USES=		python
USE_PYTHON=	distutils autoplist

GSSAPI_BASE_EXTRA_PATCHES=	${PATCHDIR}/extra-patch-src_kerberosbasic.h \
				${PATCHDIR}/extra-patch-src_kerberosgss.c \
				${PATCHDIR}/extra-patch-src_kerberosgss.h \
				${PATCHDIR}/extra-patch-src_kerberospw.h

GSSAPI_HEIMDAL_EXTRA_PATCHES=	${GSSAPI_BASE_EXTRA_PATCHES}

post-patch:
	@${REINPLACE_CMD} -e 's|getoutput("krb5-config|getoutput("${GSSAPIBASEDIR}/bin/krb5-config|g' ${WRKSRC}/setup.py

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/kerberos*.so

.include <bsd.port.mk>
