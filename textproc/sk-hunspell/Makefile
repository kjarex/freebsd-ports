PORTNAME=	hunspell
PORTVERSION=	20110228
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	http://www.sk-spell.sk.cx/files/
PKGNAMEPREFIX=	sk-
DISTNAME=	hunspell-sk-${PORTVERSION}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Slovak hunspell dictionaries
WWW=		https://www.sk-spell.sk.cx/

LICENSE=	GPLv2 LGPL21 MPL11
LICENSE_COMB=	dual
LICENSE_FILE_GPLv2=	${WRKSRC}/doc/GPL
LICENSE_FILE_LGPL21=	${WRKSRC}/doc/LGPL
LICENSE_FILE_MPL11=	${WRKSRC}/doc/MPL

USES=		zip
NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	${DATADIR}/sk_SK.aff \
		${DATADIR}/sk_SK.dic

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/sk_SK.aff ${WRKSRC}/sk_SK.dic ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
