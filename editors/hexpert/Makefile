PORTNAME=	hexpert
PORTVERSION=	2.4.1
CATEGORIES=	editors
MASTER_SITES=	LOCAL/peter

MAINTAINER=	peter@FreeBSD.org
COMMENT=	Simple but flexible binary file editor

USES=		ncurses uidfix
MAKE_ENV=	MK_MAN=no
MAKE_ARGS=	LDADD="-lncurses"

PLIST_FILES=	bin/hex

.include <bsd.port.mk>
