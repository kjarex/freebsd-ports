PORTNAME=	filerunner
PORTVERSION=	19.07.08.17
CATEGORIES=	x11-fm tk
MASTER_SITES=	SF/${PORTNAME}/release-${PORTVERSION}
DISTNAME=	fr-${PORTVERSION}

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Tcl/Tk-based filemanager with FTP capabilities
WWW=		https://sourceforge.net/projects/filerunner/

LICENSE=	GPLv2

WRKSRC=		${WRKDIR}/${PORTNAME}
NO_BUILD=	yes

USES+=		tk:run

USE_LDCONFIG=	yes

post-patch:
	${REINPLACE_CMD} -e 's|/usr/bin/env wish|${WISH}|' ${WRKSRC}/fr

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} \* ${STAGEDIR}${DATADIR}
.for file in fr frftp
	@${CHMOD} ${BINMODE} ${STAGEDIR}${DATADIR}/${file}
.endfor
	@${LN} -sf ${DATADIR}/fr ${STAGEDIR}${PREFIX}/bin/fr

.include <bsd.port.mk>
