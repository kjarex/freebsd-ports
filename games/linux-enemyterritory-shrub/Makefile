PORTNAME=	shrub
PORTVERSION=	1.2
PORTREVISION=	1
CATEGORIES=	games linux
MASTER_SITES=	LOCAL/alepulver
PKGNAMEPREFIX=	linux-enemyterritory-
DISTNAME=	1.2-test13-l

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Shrub - An Enemy Territory Modification
WWW=		http://www.planetwolfenstein.com/shrub/

RUN_DEPENDS=	et:games/linux-enemyterritory

USES=		linux zip
NO_WRKSUBDIR=	yes

DATADIR=	${PREFIX}/lib/enemyterritory/${PORTNAME}

PLIST_FILES=	bin/et-${PORTNAME} \
		bin/etded-${PORTNAME} \
		%%DATADIR%%/qagame.mp.i386.so
PLIST_DIRS=	%%DATADIR%%

do-build:
.for f in et etded
	@(${ECHO} "#!/bin/sh"; \
	${ECHO} 'exec ${PREFIX}/bin/${f} +set fs_game ${PORTNAME} "$$@"') > \
		${WRKSRC}/${f}-${PORTNAME}
.endfor

do-install:
.for f in et etded
	${INSTALL_SCRIPT} ${WRKSRC}/${f}-${PORTNAME} ${STAGEDIR}${PREFIX}/bin
.endfor
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_PROGRAM} ${WRKSRC}/qagame.mp.i386.so ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
