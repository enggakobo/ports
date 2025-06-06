PORTNAME=	visualvm
DISTVERSION=	2.1.9
CATEGORIES=	java devel
MASTER_SITES=	https://github.com/oracle/visualvm/releases/download/${PORTVERSION}/
DISTNAME=	visualvm_${PORTVERSION:S/.//g}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	GUI tool combining CLI JDK tools and profiling capabilities
WWW=		https://visualvm.github.io/

LICENSE=	VISUALVM
LICENSE_NAME=	VISUALVM with ClassPath Exception
LICENSE_FILE=	${WRKSRC}/LICENSE.txt
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

USES=		desktop-file-utils java zip:infozip

NO_BUILD=	yes
SUB_FILES=	visualvm.desktop

WRKSRC=		${WRKDIR}/visualvm_${PORTVERSION:S/.//g}

post-extract:
	@${FIND} ${WRKSRC} -type f \( -name '*.bak' -or -name '*.dll' -or -name '*.exe' \) -delete

post-patch:
	@${REINPLACE_CMD} 's|%%JAVA_HOME%%|${JAVA_HOME}|' ${WRKSRC}/bin/visualvm

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/bin/visualvm ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/visualvm
.for i in platform visualvm
	@(cd ${WRKSRC} && ${COPYTREE_SHARE} ${i} ${STAGEDIR}${PREFIX}/share/visualvm/)
.endfor
.for i in visualvm.conf visualvm.clusters visualvm.icns visualvm.import
	${INSTALL_DATA} ${WRKSRC}/etc/${i} ${STAGEDIR}${PREFIX}/etc/${i}.sample
.endfor
	@${UNZIP_CMD} -q -j -d ${STAGEDIR}${DATADIR} ${WRKSRC}/visualvm/modules/org-graalvm-visualvm-application.jar org/graalvm/visualvm/application/resources/visualvm.png
	${INSTALL_DATA} ${WRKDIR}/*.desktop ${STAGEDIR}${PREFIX}/share/applications/

.include <bsd.port.mk>
