PORTNAME=	exhaust-ma
PORTVERSION=	1.9
CATEGORIES=	games
MASTER_SITES=	http://corewar.co.uk/ankerl/
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Redcode simulator easy to embed into applications
WWW=		https://corewar.co.uk/ankerl/exhaust-ma.htm

USES=		gmake dos2unix zip

NO_WRKSUBDIR=	yes

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/exhaust ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
