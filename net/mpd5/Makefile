PORTNAME=	mpd
DISTVERSION=	5.9
PORTREVISION=	19
CATEGORIES=	net
MASTER_SITES=	SF/${PORTNAME}/Mpd5/Mpd-${PORTVERSION}
PKGNAMESUFFIX=	5
DIST_SUBDIR=	mpd5

MAINTAINER=	eugen@FreeBSD.org
COMMENT=	Multi-link PPP daemon based on netgraph(4)
WWW=		https://sourceforge.net/projects/mpd/

LICENSE=	BSD3CLAUSE

USES=		cpe

MAKE_ARGS+=	MANDIR=${PREFIX}/share/man/man

CPE_VENDOR=	mpd_project

OPTIONS_DEFINE=	DOCS NG_IPACCT RADIUS
OPTIONS_DEFAULT=	RADIUS
NG_IPACCT_DESC=	Use ng_ipacct kernel module from port
RADIUS_DESC=	Enable RADIUS support

HAS_CONFIGURE=	YES
CONFIGURE_WRKSRC=	"${WRKSRC}/src"

.include <bsd.port.options.mk>

MAKE_ARGS+=	OSVERSION=${OSVERSION}

.if ${PORT_OPTIONS:MNG_IPACCT}
BUILD_DEPENDS+=	${LOCALBASE}/include/netgraph/ng_ipacct.h:net-mgmt/ng_ipacct
.if exists(${KMODDIR}/ng_ipacct.ko)
RUN_DEPENDS+=	${KMODDIR}/ng_ipacct.ko:net-mgmt/ng_ipacct
.else
RUN_DEPENDS+=	/boot/modules/ng_ipacct.ko:net-mgmt/ng_ipacct
.endif
.else
CONFIGURE_ENV+=	USE_NG_IPACCT=no
MAKE_ARGS+=	USE_NG_IPACCT=no
.endif

.if ${PORT_OPTIONS:MRADIUS}
PLIST_FILES=	${DATADIR}/dictionary.mpd

post-install:
		${MKDIR} ${STAGEDIR}${DATADIR}
		${INSTALL_DATA} ${WRKSRC}/conf/dictionary.mpd ${STAGEDIR}${DATADIR}
.else
CONFIGURE_ENV+=	USE_RADIUS=no
MAKE_ARGS+=	USE_RADIUS=no
.endif

USE_RC_SUBR=	mpd5
CONFSUF=	conf secret script
DOCSDIR=	${PREFIX}/share/doc/mpd5
PORTDOCS=	README mpd*
PLIST_FILES+=	${CONFSUF:C|(.*)|"@sample etc/mpd5/mpd.\1.sample"|} \
		sbin/mpd5

.if !defined(WITHOUT_MAN)
PLIST_FILES+=	share/man/man8/mpd5.8.gz
.endif

.include <bsd.port.mk>
