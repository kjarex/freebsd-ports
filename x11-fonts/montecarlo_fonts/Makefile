PORTNAME=	montecarlo_fonts
PORTVERSION=	1.0
PORTREVISION=	3
CATEGORIES=	x11-fonts
MASTER_SITES=	http://bok.net/MonteCarlo/downloads/ \
		http://mirror.4bit.ws/
DISTNAME=	MonteCarlo-PCF
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Monospace font
WWW=		https://bok.net/MonteCarlo/

USES=		fonts xorg
USE_XORG=	x11
NO_BUILD=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	@${INSTALL_DATA} ${WRKSRC}/*.pcf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
