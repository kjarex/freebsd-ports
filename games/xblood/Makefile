PORTNAME=	xblood
PORTVERSION=	2.0
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	http://kozos.jp/myfreesoft/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Makes the root window bloody
WWW=		https://kozos.jp/myfreesoft/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

MAKE_ENV=	X11BASE=${LOCALBASE}
USES=		xorg
USE_XORG=	x11
PLIST_FILES=	bin/xblood man/man1/xblood.1.gz

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/xblood

.include <bsd.port.mk>
