PORTNAME=	luafilesystem
DISTVERSIONPREFIX=	v
DISTVERSION=	1_8_0
CATEGORIES=	devel
PKGNAMEPREFIX=	${LUA_PKGNAMEPREFIX}

MAINTAINER=	fiziologus@gmail.com
COMMENT=	Library to access directory structure and file attributes
WWW=		http://www.keplerproject.org/luafilesystem/index.html

LICENSE=	MIT

USES=		lua:module

USE_GITHUB=	yes
GH_ACCOUNT=	keplerproject

ALL_TARGET=	lib

PLIST_FILES=	%%LUA_MODLIBDIR%%/lfs.so
PORTDOCS=	*

MAKE_ARGS+=	INCS="-I${LUA_INCDIR}"

OPTIONS_DEFINE=	DOCS

DOCSDIR=	${LUA_DOCSDIR}

post-patch:
	${REINPLACE_CMD} -e \
		"s|%%PREFIX%%|${PREFIX}| ; \
		s|%%MODLIBDIR%%|${LUA_MODLIBDIR}| ; \
		s|%%INCDIR%%|${LUA_INCDIR}|" ${WRKSRC}/config

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR} && \
	${INSTALL_DATA} ${WRKSRC}/doc/us/* ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
