PORTNAME=	spidermonkey17
DISTVERSION=	1.7.0
PORTREVISION=	5
CATEGORIES=	lang
MASTER_SITES=	MOZILLA/js
DISTNAME=	js-${DISTVERSION}

MAINTAINER=	citric@cubicone.tmetic.com
COMMENT=	Standalone JavaScript interpreter from the Mozilla project
WWW=		https://spidermonkey.dev/

DEPRECATED=	Obsolete, released in 2007 and since long unsupported upstream
EXPIRATION_DATE=2022-09-30

BROKEN_aarch64=		fails to link: missing sbrk
BROKEN_armv6=		fails to link: final link failed: Nonrepresentable section on output
BROKEN_armv7=		fails to link: /nxb-bin/usr/bin/ld: FreeBSD12.0-CURRENT_DBG.OBJ/js: hidden symbol `__aeabi_uidivmod' in /usr/lib/libgcc.a(aeabi_uidivmod.o) is referenced by DSO
BROKEN_mips64=		fails to link: final link failed: Nonrepresentable section on output
BROKEN_riscv64=		fails to link: missing sbrk
BROKEN_sparc64=		fails to link

LIB_DEPENDS=	libnspr4.so:devel/nspr

MAKE_ARGS+=	JS_THREADSAFE=YES \
		PROG_LIBS="-lreadline -lncurses -lm -lpthread" \
		LDFLAGS="-L${LOCALBASE}/lib"
CFLAGS+=	-I${LOCALBASE}/include/nspr

USES=		gmake ncurses readline
MAKEFILE=	Makefile.ref
ALL_TARGET=	${OPSYS}`${UNAME} -r`_DBG.OBJ/js
MAKE_ENV+=	CCC="${CXX}"
USE_LDCONFIG=	yes
SRC_DIR=	js/src

JSH=		jsapi.h jsarena.h jsarray.h jsatom.h jsautocfg.h jsbool.h \
		jsclist.h jscntxt.h jscompat.h jsconfig.h jsdate.h jsdhash.h \
		jsdtoa.h jsemit.h jsexn.h jsfun.h jsgc.h jshash.h jsinterp.h \
		jsiter.h jslibmath.h jslock.h jslong.h jsmath.h jsnum.h jsobj.h \
		jsopcode.h jsosdep.h jsotypes.h jsparse.h jsprf.h jsprvtd.h \
		jspubtd.h jsutil.h jsregexp.h jsscan.h jsscope.h jsscript.h \
		jsstr.h jstypes.h jsxdrapi.h jsxml.h \
		js.msg jsproto.tbl

PLIST_FILES=	bin/js lib/libjs.so lib/libjs.so.1 ${JSH:S,^,include/js-1.7/,}
WRKSRC=		${WRKDIR}/${SRC_DIR}
EXTRACT_AFTER_ARGS=	--exclude js/jsd

OPTIONS_DEFINE=	UTF8

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MUTF8}
CFLAGS+=	-DJS_C_STRINGS_ARE_UTF8
.endif

do-configure:
	${CP} ${WRKSRC}/config/Linux_All.mk \
		${WRKSRC}/config/${OPSYS}`${UNAME} -r`.mk

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${OPSYS}`${UNAME} -r`_DBG.OBJ/js \
		${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/${OPSYS}`${UNAME} -r`_DBG.OBJ/libjs.so \
		${STAGEDIR}${PREFIX}/lib
	${LN} -sf libjs.so ${STAGEDIR}${PREFIX}/lib/libjs.so.1
	${CP} ${WRKSRC}/${OPSYS}`${UNAME} -r`_DBG.OBJ/jsautocfg.h ${WRKSRC}
	@${MKDIR} ${STAGEDIR}${PREFIX}/include/js-1.7
	@${INSTALL_DATA} ${JSH:S,^,${WRKSRC}/,} \
		${STAGEDIR}${PREFIX}/include/js-1.7/

.include <bsd.port.mk>
