PORTNAME=	ffdec
DISTVERSION=	14.4.0
CATEGORIES=	multimedia java
MASTER_SITES=	https://github.com/jindrapetrik/jpexs-decompiler/releases/download/version${PORTVERSION}/
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	cyberbotx@cyberbotx.com
COMMENT=	Flash decompiler
WWW=		https://github.com/jindrapetrik/jpexs-decompiler

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/license.txt

USES=		zip
USE_JAVA=	yes
JAVA_VERSION=	1.8

NO_BUILD=	yes
SUB_FILES=	${PORTNAME}

NO_WRKSUBDIR=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.jar ${STAGEDIR}${DATADIR}
	@${MKDIR}  ${STAGEDIR}${DATADIR}/lib
	cd ${WRKSRC}/lib && ${COPYTREE_SHARE} \* ${STAGEDIR}${DATADIR}/lib/

.include <bsd.port.mk>
