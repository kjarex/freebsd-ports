PORTNAME=	xkbctrl
PORTVERSION=	1.0
PORTREVISION=	2
CATEGORIES=	x11
MASTER_SITES=	XORG/unsupported/test/Xkb/programs
DISTFILES=	Imakefile xkbctrl.c

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Display and manipulate XKB keyboard controls from the commandline

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

DIST_SUBDIR=	xkbctrl
PLIST_FILES=	bin/xkbctrl
USES=		imake xorg
USE_XORG=	x11 xkbfile
NO_WRKSUBDIR=	yes

do-extract:
	@${RM} -r ${WRKSRC}
	@${MKDIR} ${WRKSRC}
	@for _file in ${DISTFILES}; do \
		${CP} ${DISTDIR}/${DIST_SUBDIR}/$${_file} ${WRKSRC}; \
	done
	@${SED} -n '3,24p' <${WRKSRC}/xkbctrl.c >${WRKSRC}/COPYING

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
