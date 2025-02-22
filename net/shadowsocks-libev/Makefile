PORTNAME=	shadowsocks-libev
DISTVERSIONPREFIX=	v
DISTVERSION=	3.3.5
PORTREVISION=	3
CATEGORIES=	net

MAINTAINER=	xiaoding+freebsd@xiaoding.org
COMMENT=	Lightweight tunnel proxy which can help you get through firewalls
WWW=		https://github.com/shadowsocks/shadowsocks-libev

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Abandonware, no active development. Please migrate to net/shadowsocks-rust
EXPIRATION_DATE=2024-11-30

LIB_DEPENDS=	libev.so:devel/libev \
		libmbedcrypto.so:security/mbedtls \
		libpcre.so:devel/pcre \
		libsodium.so:security/libsodium \
		libcares.so:dns/c-ares

USES=		autoreconf compiler:c11 gmake libtool:keepla pathfix
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
CONFIGURE_ARGS=	--enable-shared
USE_GITHUB=	yes
GH_ACCOUNT=	shadowsocks
GH_TUPLE=	shadowsocks:libbloom:437e1ad:libbloom/libbloom \
		shadowsocks:libcork:074e074:libcork/libcork \
		shadowsocks:ipset:3ea7fe3:libipset/libipset
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	BASH DOCS ZSH
OPTIONS_SUB=	yes

DOCS_BUILD_DEPENDS=	asciidoc:textproc/asciidoc \
		xmlto:textproc/xmlto
DOCS_CONFIGURE_OFF=	--disable-documentation

USE_RC_SUBR=	shadowsocks_libev

post-install:
	@${MKDIR} ${STAGEDIR}${ETCDIR}
	${INSTALL_DATA} ${WRKSRC}/debian/config.json ${STAGEDIR}${ETCDIR}/config.json.sample

post-install-BASH-on:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/bash-completion/completions
.for c in ss-local ss-manager ss-redir ss-server ss-tunnel
	${INSTALL_DATA} ${WRKSRC}/completions/bash/${c} ${STAGEDIR}${PREFIX}/share/bash-completion/completions/${c}
.endfor

post-install-ZSH-on:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/zsh/site-functions
.for c in _ss-local _ss-manager _ss-redir _ss-server _ss-tunnel
	${INSTALL_DATA} ${WRKSRC}/completions/zsh/${c} ${STAGEDIR}${PREFIX}/share/zsh/site-functions/${c}
.endfor

.include <bsd.port.mk>
