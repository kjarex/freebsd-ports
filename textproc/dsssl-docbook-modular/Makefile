PORTNAME=	dsssl-docbook-modular
PORTVERSION=	1.79
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	textproc
MASTER_SITES=	SF/docbook/docbook-dsssl/${PORTVERSION}:1 \
		SF/docbook/docbook-dsssl-doc/${PORTVERSION}:2
DISTNAME=	docbook-dsssl-${PORTVERSION}
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}:1 docbook-dsssl-doc-${PORTVERSION}${EXTRACT_SUFX}:2

PATCH_SITES=	http://dist.bsdlab.org/
PATCHFILES=	docbook-dsssl-mn-20070525.diff.gz
PATCH_DIST_STRIP=	-p1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DSSSL stylesheets for the DocBook DTD by Norman Walsh
WWW=		https://sourceforge.net/projects/docbook/

BUILD_DEPENDS=	xmlcatmgr:textproc/xmlcatmgr
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
NO_MTREE=	yes

RELDIR=		docbook/dsssl/modular
INSTDIR=	${PREFIX}/share/sgml/${RELDIR}

do-build:
	${RM} -R ${WRKSRC}/docsrc

do-install:
	${MKDIR} ${STAGEDIR}${INSTDIR}
	${FIND} ${WRKDIR} -name '*.orig' -exec ${RM} {} \;
	cd ${WRKSRC} && ${PAX} -rw . ${STAGEDIR}${INSTDIR}

.include <bsd.port.mk>
