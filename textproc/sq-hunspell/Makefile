PORTNAME=	hunspell
PORTVERSION=	1.6.2
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	http://www.shkenca.org/shkarkime/
PKGNAMEPREFIX=	sq-
DISTNAME=	myspell-sq_AL-${PORTVERSION}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Albanian hunspell dictionaries
WWW=		https://www.shkenca.org/k6i/albanian_dictionary_for_myspell_en.html

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

USES=		zip
NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	${DATADIR}/sq_AL.aff \
		${DATADIR}/sq_AL.dic

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/sq_AL.aff ${WRKSRC}/sq_AL.dic ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
