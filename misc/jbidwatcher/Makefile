PORTNAME=	jbidwatcher
PORTVERSION=	2.5.6
PORTREVISION=	2
CATEGORIES=	misc java
MASTER_SITES=	http://www.jbidwatcher.com/download/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Java-based application allowing you to monitor eBay auctions
WWW=		https://www.jbidwatcher.com/

USES=	java:ant,run tar:bzip2

ALL_TARGET=	jar

SUB_FILES=	jbidwatcher
SUB_LIST+=	PORTVERSION=${PORTVERSION}
PLIST_FILES=	%%JAVAJARDIR%%/JBidwatcher-${PORTVERSION}.jar \
		bin/${PORTNAME}

do-install:
	@${INSTALL_DATA} ${WRKSRC}/JBidwatcher-${PORTVERSION}.jar ${STAGEDIR}${JAVAJARDIR}
	@${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
