PORTNAME=		moosefs2
PORTVERSION=		2.0.91
PORTREVISION=	1
CATEGORIES=		filesystems sysutils
MASTER_SITES=		http://ppa.moosefs.com/src/
PKGNAMESUFFIX?=		-master
DISTNAME=		moosefs-${PORTVERSION}-1

MAINTAINER=		freebsd@moosefs.com
COMMENT?=		Fault-tolerant distributed filesystem
WWW=		https://moosefs.com/

LICENSE=		GPLv2

USES=			python:build
GNU_CONFIGURE=		yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
WRKSRC=			${WRKDIR}/moosefs-${PORTVERSION}
PLIST=			${.CURDIR}/pkg-plist
DESCR=			${.CURDIR}/pkg-descr

MFS_COMPONENT?=		master
MFS_USER=		mfs
MFS_GROUP=		mfs
MFS_WORKDIR=		/var

USERS=			${MFS_USER}
GROUPS=			${MFS_GROUP}

CONFIGURE_ARGS+=	--localstatedir=${MFS_WORKDIR} \
			--with-default-user=${MFS_USER} \
			--with-default-group=${MFS_GROUP} \

.if ${MFS_COMPONENT} == cgi
MFS_CGIDIR=		${PREFIX}/share/mfscgi
USES=			python
CONFIGURE_ARGS+=	--enable-mfscgi \
			--with-mfscgi-dir=${MFS_CGIDIR}
.else
CONFIGURE_ARGS+=	--disable-mfscgi
.endif

.if ${MFS_COMPONENT} == cgiserv
MFS_CGISERVDIR=		${PREFIX}/sbin
USES=			python
USE_RC_SUBR=		mfscgiserv
SUB_FILES+=		pkg-message-cgiserv
PKGMESSAGE=		${WRKDIR}/pkg-message-cgiserv
PLIST_SUB+=		MFS_WORKDIR="${MFS_WORKDIR}"
CONFIGURE_ARGS+=	--enable-mfscgiserv \
			--with-mfscgiserv-dir=${MFS_CGISERVDIR}
RUN_DEPENDS=		moosefs2-cgi>0:filesystems/moosefs2-cgi
.else
CONFIGURE_ARGS+=	--disable-mfscgiserv
.endif

.if ${MFS_COMPONENT} == chunkserver
USE_RC_SUBR=		mfschunkserver
SUB_FILES+=		pkg-message-chunkserver
PKGMESSAGE=		${WRKDIR}/pkg-message-chunkserver
PLIST_SUB+=		MFS_WORKDIR="${MFS_WORKDIR}"
CONFIGURE_ARGS+=	--enable-mfschunkserver
.else
CONFIGURE_ARGS+=	--disable-mfschunkserver
.endif

.if ${MFS_COMPONENT} == cli
USES=			python
CONFIGURE_ARGS+=	--enable-mfscli
.else
CONFIGURE_ARGS+=	--disable-mfscli
.endif

.if ${MFS_COMPONENT} == client
USES=			compiler:c11 fuse pkgconfig
CONFIGURE_ARGS+=	--enable-mfsmount
.else
CONFIGURE_ARGS+=	--disable-mfsmount
.endif

.if ${MFS_COMPONENT} == master
USE_RC_SUBR=		mfsmaster
PLIST_SUB+=		MFS_WORKDIR="${MFS_WORKDIR}"
SUB_FILES+=		pkg-message-master
PKGMESSAGE=		${WRKDIR}/pkg-message-master
CONFIGURE_ARGS+=	--enable-mfsmaster
.else
CONFIGURE_ARGS+=	--disable-mfsmaster
.endif

.if ${MFS_COMPONENT} == metalogger
USE_RC_SUBR=		mfsmetalogger
SUB_FILES+=		pkg-message-metalogger
PKGMESSAGE=		${WRKDIR}/pkg-message-metalogger
PLIST_SUB+=		MFS_WORKDIR="${MFS_WORKDIR}"
CONFIGURE_ARGS+=	--enable-mfsmetalogger
.else
CONFIGURE_ARGS+=	--disable-mfsmetalogger
.endif

.if ${MFS_COMPONENT} == netdump
CONFIGURE_ARGS+=	--enable-mfsnetdump
.else
CONFIGURE_ARGS+=	--disable-mfsnetdump
.endif

.include <bsd.port.mk>
