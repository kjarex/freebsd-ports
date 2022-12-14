PORTNAME=	tokamak
PORTVERSION=	1.0.5a
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}p/Tokamak%20Physics%20Engine/Tokamak%20${PORTVERSION}
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	High performance real-time physics library
WWW=		http://www.tokamakphysics.com/

LICENSE=	BSD3CLAUSE ZLIB
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/license.txt # not actually used by ports framework

USES=		gmake zip:infozip dos2unix
DOS2UNIX_FILES=	build/gnu/tokamak.make

MAKEFILE=	tokamak.make
ALL_TARGET=	# empty

WRKSRC=		${WRKDIR}/tokamak_release
BUILD_WRKSRC=	${WRKSRC}/build/gnu

PORTSCOUT=	skipv:1.0.5

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

.if !defined(WITH_DEBUG)
CPPFLAGS+=	-DNDEBUG
.endif

post-extract:
	@cd ${WRKSRC} && ${UNZIP_CMD} -q tokamak-premake.zip

post-patch:
	@${REINPLACE_CMD} -e 's|malloc.h|stdlib.h|' ${WRKSRC}/include/tokamak.h

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/include/math/
	${INSTALL_DATA} ${WRKSRC}/include/tokamak.h ${STAGEDIR}${PREFIX}/include/
	${INSTALL_DATA} ${WRKSRC}/include/math/*.h ${STAGEDIR}${PREFIX}/include/math/
	${INSTALL_DATA} ${WRKSRC}/lib/libtokamak_m.a ${STAGEDIR}${PREFIX}/lib/
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/license.txt ${WRKSRC}/readme.txt ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC}/documentation && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
