PORTNAME=	festvox-ked8
PORTVERSION=	1.4.0
PORTREVISION=	1
CATEGORIES=	audio accessibility
MASTER_SITES=	FESTIVAL/1.4.1
DISTNAME=	festvox_kedlpc8k
DIST_SUBDIR=	festival

MAINTAINER=	ports@FreeBSD.org
COMMENT=	American English male voice, sampled at 8 kHz, for Festival
WWW=		https://www.cstr.ed.ac.uk/projects/festival/

RUN_DEPENDS=	\
${LOCALBASE}/share/festival/lib/dicts/wsj.wp39.poslexR:audio/festlex-poslex \
${LOCALBASE}/share/festival/lib/dicts/cmu/cmulex.scm:audio/festlex-cmu

WRKSRC=		${WRKDIR}/festival

CONFLICTS=	festvox-ked16

NO_BUILD=	yes

FHOME=		${PREFIX}/share/festival

do-install:
	@${MKDIR} ${STAGEDIR}${FHOME}
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${FHOME}

.include <bsd.port.mk>
