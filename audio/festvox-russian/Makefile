PORTNAME=	festvox
PORTVERSION=	0.5
CATEGORIES=	audio
MASTER_SITES=	SF/festlang.berlios/ \
		BERLIOS/festlang
PKGNAMESUFFIX=	-russian
DISTNAME=	msu_ru_nsh_clunits-${PORTVERSION}
DIST_SUBDIR=	festival

MAINTAINER=	yerenkow@gmail.com
COMMENT=	Russian male voice for Festival speech synthesis system
WWW=		http://festlang.berlios.de/docu/doku.php?id=russian

RUN_DEPENDS=	festival:audio/festival

USES=		tar:bzip2

WRKSRC=		${WRKDIR}/msu_ru_nsh_clunits

NO_BUILD=	yes

FHOME=		${PREFIX}/share/festival/lib/voices/russian/msu_ru_nsh_clunits

do-install:
	@${MKDIR} ${STAGEDIR}${FHOME}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${FHOME})

.include <bsd.port.mk>
