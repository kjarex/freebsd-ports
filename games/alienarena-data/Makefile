PORTNAME=	alienarena
PORTVERSION=	2013.766
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	ftp://ftp.linux.kiev.ua/pub/Linux/Gentoo/distfiles/ \
		http://ftp.jeuxlinux.fr/files/ \
		http://mirror.ipgn.com.au/games/alienarena/ \
		http://gd.tuwien.ac.at/opsys/linux/gentoo/distfiles/ \
		http://offload2.icculus.org:9090/alienarena/Files/ \
		http://offload1.icculus.org:9090/alienarena/Files/ \
		http://icculus.org/alienarena/Files/ \
		http://red.planetarena.org/files/ \
		GENTOO
PKGNAMESUFFIX=	-data
DISTNAME=	${PORTNAME}-7.66-linux20130827

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Alien Arena (data)
WWW=		http://red.planetarena.org/

LICENSE=	AlienArena-Data
LICENSE_NAME=	Freely redistributable as a whole
LICENSE_FILE=	${WRKSRC}/docs/license.txt
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept
# See also http://red.planetarena.org/forum/showthread.php?tid=716 where fedora asked for clarification

NO_BUILD=	yes
PLIST=		${WRKDIR}/pkg-plist
WRKSRC=		${WRKDIR}/${PORTNAME}-7.66

OPTIONS_DEFINE=	DOCS

pre-install:
	@${RM} -f ${PLIST}

.	for DIRE in arena botinfo data1
		@cd ${WRKSRC} && \
			${FIND} ${DIRE} -type f | ${SORT} | ${SED} -e 's|^|%%DATADIR%%/|' >> ${PLIST} && \
				${FIND} ${DIRE} -type d | ${SORT} -r | ${SED} -e 's|^|@dir %%DATADIR%%/|' >> ${PLIST}
.	endfor

	@${ECHO_CMD} share/pixmaps/${PORTNAME}.png >> ${PLIST}

	@cd ${WRKSRC}/docs && \
		${FIND} * -type f | ${SORT} | ${SED} -e 's|^|%%PORTDOCS%%%%DOCSDIR%%/|' >> ${PLIST} && \
		${FIND} * -type d | ${SORT} -r | ${SED} -e 's|^|%%PORTDOCS%%@dir %%DOCSDIR%%/|' >> ${PLIST}

do-install:
	cd ${WRKSRC} && ${COPYTREE_SHARE} "arena botinfo data1" ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.png \
		${STAGEDIR}${PREFIX}/share/pixmaps/${PORTNAME}.png
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/* ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
