PORTNAME=	averiagwf
PORTVERSION=	1.00
PORTREVISION=	1
CATEGORIES=	x11-fonts
MASTER_SITES=	http://iotic.com/averia/font-files/GWF/
DISTNAME=	AveriaGWF
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} AveriaSansGWF${EXTRACT_SUFX} AveriaSerifGWF${EXTRACT_SUFX}

MAINTAINER=	alfix86@gmail.com
COMMENT=	Average font
WWW=		http://iotic.com/averia/

LICENSE=	OFL11
LICENSE_FILE=	${WRKSRC}/OFL.txt

USES=		fonts zip
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PORTDOCS=	FONTLOG.txt

OPTIONS_DEFINE=	DOCS

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} *.ttf ${STAGEDIR}${FONTSDIR}
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
