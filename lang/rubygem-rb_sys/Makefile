PORTNAME=	rb_sys
PORTVERSION=	0.9.111
CATEGORIES=	lang rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Helpers for compiling Rust extensions for ruby
WWW=		https://oxidize-rb.github.io/rb-sys/ \
		https://github.com/oxidize-rb/rb-sys

LICENSE=	APACHE20 MIT
LICENSE_COMB=   dual
LICENSE_FILE_APACHE20=	${WRKSRC}/LICENSE-APACHE
LICENSE_FILE_MIT=	${WRKSRC}/LICENSE-MIT

RUN_DEPENDS=	rubygem-rake-compiler-dock>=1.9.1<1.9.1_99:devel/rubygem-rake-compiler-dock

USES=		gem

NO_ARCH=	yes

PLIST_FILES=	bin/rb-sys-dock

.include <bsd.port.mk>
