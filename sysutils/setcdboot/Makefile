PORTNAME=	setcdboot
PORTVERSION=	1.0
CATEGORIES=	sysutils

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Mark a file bootable within a DEC Alpha ISO-9660 image

DISTFILES=
NO_WRKSUBDIR=	yes
PLIST_FILES=	bin/setcdboot

.include <bsd.port.pre.mk>

do-extract:
	${MKDIR} ${WRKSRC}
	${CP} ${FILESDIR}/setcdboot.c ${WRKSRC}

do-build:
	(cd ${WRKSRC} && ${CC} ${CFLAGS} -o setcdboot setcdboot.c)

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/setcdboot ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.post.mk>
