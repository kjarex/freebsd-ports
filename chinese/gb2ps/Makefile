PORTNAME=	gb2ps
PORTVERSION=	2.02
CATEGORIES=	chinese print
MASTER_SITES=	ftp://ftp.cuhk.hk/pub/chinese/ifcss/software/unix/print/:sw  \
		ftp://ftp.cuhk.hk/pub/chinese/ifcss/software/fonts/gb/misc/:font
DISTNAME=	gb2ps.2.02
DISTFILES=	${DISTNAME}.tar.gz:sw  \
		csong24.ccf.gz:font ckai24.ccf.gz:font cfang24.ccf.gz:font \
		chei24.ccf.gz:font cfan24.ccf.gz:font
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Converts Chinese GB (simple) encoded text to PostScript

LICENSE=	UNKNOWN
LICENSE_NAME=	unknown
LICENSE_TEXT=	This program is NOT in public domain.\
		It can be freely distributed for non-commercial purposes only,\
		and THERE IS NO WARRANTY FOR THIS PROGRAM.
LICENSE_PERMS=	dist-mirror no-dist-sell pkg-mirror no-pkg-sell auto-accept

WRKSRC=		${WRKDIR}/GB2PS

OPTIONS_DEFINE=	DOCS

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/chinese/gb
	${INSTALL_PROGRAM} ${WRKSRC}/gb2ps ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/cover.ps ${STAGEDIR}${PREFIX}/share/chinese
.for font in csong24.ccf ckai24.ccf cfang24.ccf chei24.ccf cfan24.ccf
	${GUNZIP_CMD} -c ${DISTDIR}/${font}.gz > ${STAGEDIR}${PREFIX}/share/chinese/gb/${font}
.endfor

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/gb2ps.help ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
