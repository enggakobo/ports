PORTNAME=	sigar
PORTVERSION=	1.7.3
PORTREVISION=	11
CATEGORIES=	java devel
PKGNAMEPREFIX=	java-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Java bindings for the Sigar system information API
WWW=		https://support.hyperic.com/display/SIGAR/Home

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/NOTICE

BUILD_DEPENDS=	${ANT_CMD}:devel/apache-ant
LIB_DEPENDS=	libsigar.so:devel/sigar
TEST_DEPENDS=	${JAVALIBDIR}/junit.jar:java/junit

USES=		java perl5
USE_GITHUB=	yes
GH_ACCOUNT=	polo-language # amishHammer
GH_TAGNAME=	6719d4d
USE_PERL5=	build

NO_CCACHE=	yes

BUILD_WRKSRC=	${WRKSRC}/bindings/java

ANT_CMD?=	${LOCALBASE}/bin/ant
INVOKE_ANT=	${SETENV} PATH=${PATH}:${WRKSRC}/bin JAVA_HOME=${JAVA_HOME} \
		${ANT_CMD}

.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD
LIBNAME=	libsigar-${ARCH:S,armv6,arm,:S,armv7,arm,:S,i386,x86,:S,powerpc,ppc,}-${OPSYS:tl}-1
.else
IGNORE=		${OPSYS} platform is not supported
.endif

PLIST_FILES=	${JAVAJARDIR}/${PORTNAME}.jar \
		${JAVAJARDIR}/${LIBNAME}.so

do-build:
	${MKDIR} ${WRKSRC}/bin
	${LN} -s `which ${CC}` ${WRKSRC}/bin/gcc
	@cd ${BUILD_WRKSRC} && ${INVOKE_ANT} build

do-test:
	@cd ${BUILD_WRKSRC} && ${INVOKE_ANT} \
		-Djunit.jar="${JAVALIBDIR}/junit.jar" test

do-install:
	${INSTALL_DATA} ${WRKSRC}/bindings/java/sigar-bin/lib/sigar.jar \
		${STAGEDIR}${JAVAJARDIR}/${PORTNAME}.jar
	${INSTALL_LIB} ${WRKSRC}/bindings/java/sigar-bin/lib/${LIBNAME}.so \
		${STAGEDIR}${JAVAJARDIR}/${LIBNAME}.so

.include <bsd.port.post.mk>
