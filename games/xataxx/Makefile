PORTNAME=	xataxx
PORTVERSION=	1.0
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	XCONTRIB/../R5contrib
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Strategy game of position and movement for X Window System

OPTIONS_DEFINE=	DOCS

USES=		imake tar:Z xorg
USE_XORG=	x11 xext

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in README TODO
	(cd ${WRKSRC} && ${INSTALL_DATA} ${i} ${STAGEDIR}${DOCSDIR})
.endfor

.include <bsd.port.mk>
