PORTNAME=	efivar
PORTVERSION=	0.15
PORTREVISION=	9
CATEGORIES=	devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tools and library to manipulate EFI variables
WWW=		https://github.com/rhboot/efivar

LICENSE=	LGPL21

NOT_FOR_ARCHS=		powerpc powerpc64 powerpcspe
NOT_FOR_ARCHS_REASON=	specification only supports little-endian processors

LIB_DEPENDS=	libpopt.so:devel/popt

CFLAGS+=	-fpermissive

USES=		gmake localbase pkgconfig
USE_GCC=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	rhboot
USE_LDCONFIG=	yes

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|g' ${WRKSRC}/src/efivar.pc.in

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/efivar ${STAGEDIR}${PREFIX}/bin
	${INSTALL_LIB} ${WRKSRC}/src/libefivar.so ${STAGEDIR}${PREFIX}/lib
	${INSTALL_LIB} ${WRKSRC}/src/libefivar.so.0 ${STAGEDIR}${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/src/efivar.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/src/efivar-guids.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/src/efivar.pc ${STAGEDIR}${PREFIX}/libdata/pkgconfig
	${INSTALL_MAN} ${WRKSRC}/docs/efivar.1 ${STAGEDIR}${PREFIX}/share/man/man1
	${INSTALL_MAN} ${WRKSRC}/docs/efi_append_variable.3 ${STAGEDIR}${PREFIX}/share/man/man3
	${INSTALL_MAN} ${WRKSRC}/docs/efi_del_variable.3 ${STAGEDIR}${PREFIX}/share/man/man3
	${INSTALL_MAN} ${WRKSRC}/docs/efi_get_next_variable_name.3 ${STAGEDIR}${PREFIX}/share/man/man3
	${INSTALL_MAN} ${WRKSRC}/docs/efi_get_variable.3 ${STAGEDIR}${PREFIX}/share/man/man3
	${INSTALL_MAN} ${WRKSRC}/docs/efi_get_variable_attributes.3 ${STAGEDIR}${PREFIX}/share/man/man3
	${INSTALL_MAN} ${WRKSRC}/docs/efi_get_variable_size.3 ${STAGEDIR}${PREFIX}/share/man/man3
	${INSTALL_MAN} ${WRKSRC}/docs/efi_guid_to_name.3 ${STAGEDIR}${PREFIX}/share/man/man3
	${INSTALL_MAN} ${WRKSRC}/docs/efi_guid_to_str.3 ${STAGEDIR}${PREFIX}/share/man/man3
	${INSTALL_MAN} ${WRKSRC}/docs/efi_guid_to_symbol.3 ${STAGEDIR}${PREFIX}/share/man/man3
	${INSTALL_MAN} ${WRKSRC}/docs/efi_name_to_guid.3 ${STAGEDIR}${PREFIX}/share/man/man3
	${INSTALL_MAN} ${WRKSRC}/docs/efi_set_variable.3 ${STAGEDIR}${PREFIX}/share/man/man3
	${INSTALL_MAN} ${WRKSRC}/docs/efi_str_to_guid.3 ${STAGEDIR}${PREFIX}/share/man/man3
	${INSTALL_MAN} ${WRKSRC}/docs/efi_symbol_to_guid.3 ${STAGEDIR}${PREFIX}/share/man/man3
	${INSTALL_MAN} ${WRKSRC}/docs/efi_variables_supported.3 ${STAGEDIR}${PREFIX}/share/man/man3

.include <bsd.port.post.mk>
