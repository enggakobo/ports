PORTNAME=	gwhois
PORTVERSION=	20120626
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	http://julijane.de/gwhois/
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Flexible whois client and proxy
WWW=		https://julijane.de/gwhois/

LICENSE=	GPLv2

BROKEN=		source and WWW is gone. Hasn't been updated for 12yrs.

RUN_DEPENDS=	p5-libwww>=5.805:www/p5-libwww \
		p5-Net-LibIDN>=0:dns/p5-Net-LibIDN \
		lynx:www/lynx \
		curl:ftp/curl

USES=		perl5 shebangfix
USE_PERL5=	run
SHEBANG_FILES=	gwhois
WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTVERSION}
NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	bin/${PORTNAME} share/man/man1/gwhois.1.gz %%DATADIR%%/pattern
PORTDOCS=	TODO README.RIPE

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|/etc/gwhois|${DATADIR}|g'\
		${WRKSRC}/${PORTNAME} ${WRKSRC}/${PORTNAME}.1

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${PREFIX}/share/man/man1
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/pattern ${STAGEDIR}${DATADIR}

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
