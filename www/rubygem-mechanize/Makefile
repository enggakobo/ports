PORTNAME=	mechanize
PORTVERSION=	2.14.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	WWW::Mechanize, a handy web browsing ruby object
WWW=		https://github.com/sparklemotion/mechanize

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-addressable>=2.8<3:www/rubygem-addressable \
		rubygem-base64>=0:converters/rubygem-base64 \
		rubygem-domain_name>=0.5.20190701<1:net/rubygem-domain_name \
		rubygem-http-cookie>=1.0.3<2:www/rubygem-http-cookie \
		rubygem-mime-types>=3.3<4:misc/rubygem-mime-types \
		rubygem-net-http-digest_auth>=1.4.1<2:www/rubygem-net-http-digest_auth \
		rubygem-net-http-persistent>=2.5.2<5.0:www/rubygem-net-http-persistent \
		rubygem-nkf>=0:net/rubygem-nkf \
		rubygem-nokogiri>=1.11.2<2:textproc/rubygem-nokogiri \
		rubygem-rubyntlm>=0.6.3<1:net/rubygem-rubyntlm \
		rubygem-webrick>=1.7<2:www/rubygem-webrick \
		rubygem-webrobots>=0.1.2<0.2:www/rubygem-webrobots

USES=		cpe gem

NO_ARCH=	yes

CPE_VENDOR=	mechanize_project

.include <bsd.port.mk>
