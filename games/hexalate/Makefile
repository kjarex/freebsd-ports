PORTNAME=	hexalate
PORTVERSION=	1.2.1
CATEGORIES=	games
MASTER_SITES=	https://gottcode.org/${PORTNAME}/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Color matching game
WWW=		https://gottcode.org/hexalate/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake compiler:c++17-lang gl qt:6 tar:bzip2
USE_QT=		base tools
USE_GL=		gl

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

.include <bsd.port.mk>
