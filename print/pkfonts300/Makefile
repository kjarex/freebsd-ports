PORTNAME=	pkfonts${RESOLUTION}
PORTVERSION=	1.0
CATEGORIES=	print
MASTER_SITES=	PORTS_JP/pkfonts
DISTFILES=	pk${RESOLUTION}.tar.gz
# see below for RESOLUTION definition

MAINTAINER=	ports@FreeBSD.org
COMMENT=	English PK fonts, for ghostscripts, xdvi, and so on

DIST_SUBDIR=	pkfonts
EXTRACT_ONLY=	# extracted directly in install target
NO_BUILD=	yes
PLIST=		${PKGDIR}/pkg-plist.${RESOLUTION}

.if !defined(RESOLUTION)
RESOLUTION=	300
.else
.if ${RESOLUTION} != 118 && ${RESOLUTION} != 240 && \
	${RESOLUTION} != 300 && ${RESOLUTION} != 360 && \
	${RESOLUTION} != 400 && ${RESOLUTION} != 600
.BEGIN:
	@${ECHO_MSG} "Error: invalid value for RESOLUTION: \"${RESOLUTION}\""
	@${ECHO_MSG} "Possible values are: 118, 240, 300, 360, 400 and 600."
	@${FALSE}
.endif
.endif

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/fonts
	${TAR} -C ${STAGEDIR}${PREFIX}/lib/fonts -xzf ${DISTDIR}/${DIST_SUBDIR}/${DISTFILES}

.include <bsd.port.mk>
