PORTNAME=	mythes
PORTVERSION=	2.3
CATEGORIES=	french textproc
MASTER_SITES=	http://www.dicollecte.org/download/fr/ \
		LOCAL/sunpoet/${PORTNAME}
DISTNAME=	thesaurus-v${PORTVERSION}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	French thesaurus
WWW=		https://www.dicollecte.org/

LICENSE=	LGPL21

USES=		zip
NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	${DATADIR}/th_fr_FR_v2.dat \
		${DATADIR}/th_fr_FR_v2.idx

FRALIASES=	fr_BE fr_CA fr_CH fr_LU
.for ALIAS in ${FRALIASES}
PLIST_FILES+=	${DATADIR}/th_${ALIAS}_v2.dat \
		${DATADIR}/th_${ALIAS}_v2.idx
.endfor

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/thes_fr.dat ${STAGEDIR}${DATADIR}/th_fr_FR_v2.dat
	${INSTALL_DATA} ${WRKSRC}/thes_fr.idx ${STAGEDIR}${DATADIR}/th_fr_FR_v2.idx
.for ALIAS in ${FRALIASES}
	${LN} -s th_fr_FR_v2.dat ${STAGEDIR}${DATADIR}/th_${ALIAS}_v2.dat
	${LN} -s th_fr_FR_v2.idx ${STAGEDIR}${DATADIR}/th_${ALIAS}_v2.idx
.endfor

.include <bsd.port.mk>
