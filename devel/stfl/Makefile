PORTNAME=	stfl
PORTVERSION=	0.24
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://www.clifford.at/stfl/

MAINTAINER=	arved@FreeBSD.org
COMMENT=	Structured Terminal Forms Language/Library
WWW=		https://www.clifford.at/stfl/

LICENSE=	GPLv3

USES=		gmake iconv:wchar_t ncurses
USE_LDCONFIG=	yes

PLIST_FILES=	include/stfl.h lib/libstfl.a lib/libstfl.so lib/libstfl.so.0 \
		lib/libstfl.so.${PORTVERSION} libdata/pkgconfig/stfl.pc
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib ${ICONV_LIB}
MAKE_ENV=	LDLIBS="${LDFLAGS}"

post-patch:
	@${REINPLACE_CMD} -e 's|-Os||;/gcc/d;/-MM/s|-I.|$${CFLAGS}|; \
		/pkgconfig/s|$$(libdir)|libdata| ; \
		s/-lncursesw/${NCURSESLIBS}/g' \
		${WRKSRC}/Makefile
	@${REINPLACE_CMD} -e '/Libs.private/s|$$| ${ICONV_LIB}|' \
		${WRKSRC}/stfl.pc.in
	@${REINPLACE_CMD} -e 's|ncursesw/|${NCURSESINC}/|'\
		${WRKSRC}/stfl_internals.h
	@${ECHO_CMD} 'prefix = ${PREFIX}' > ${WRKSRC}/Makefile.cfg
	@${ECHO_CMD} 'libdir = lib' >> ${WRKSRC}/Makefile.cfg

pre-build:
	@cd ${BUILD_WRKSRC}; ${SETENV} ${MAKE_ENV}\
		${MAKE_CMD} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} Makefile.deps

post-install:
	${LN} -s libstfl.so.${PORTVERSION} ${STAGEDIR}${PREFIX}/lib/libstfl.so.0
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libstfl.so.${PORTVERSION}

.include <bsd.port.mk>
