PORTNAME=	Authen-Radius
PORTVERSION=	0.33
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module to provide simple Radius client facilities
WWW=		https://metacpan.org/release/Authen-Radius

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Data-HexDump>=0.02:devel/p5-Data-HexDump \
		p5-Net-IP>=1.26:net-mgmt/p5-Net-IP
TEST_DEPENDS=	p5-Test-NoWarnings>=0:devel/p5-Test-NoWarnings

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes
REINPLACE_ARGS=	-i ''

PORTDATA=	*

post-patch:
	@${REINPLACE_CMD} -e 's|/etc/raddb|${DATADIR}|' ${WRKSRC}/Radius.pm
	@${RM} ${WRKSRC}/install-radius-db.PL

post-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/raddb/dictionary* ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
