PORTNAME=	xdeblock
PORTVERSION=	1.0
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	http://ftp.vector.co.jp/03/94/1328/
DISTFILES=	${PORTNAME}.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Block action game
WWW=		https://www.vector.co.jp/soft/unix/game/se037694.html

WRKSRC=		${WRKDIR}/xdeblo_v1.0

USES=		imake:noman xorg
USE_XORG=	xpm

CFLAGS+=	-Wno-return-type

DESKTOP_ENTRIES="XDeBlock" "" "" "xdeblo" "" ""

post-patch:
	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|g' ${WRKSRC}/main.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xdeblo ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/X11/xdeblock/mapf
	${INSTALL_DATA} ${WRKSRC}/mapf/*.txt ${STAGEDIR}${PREFIX}/lib/X11/xdeblock/mapf

.include <bsd.port.mk>
