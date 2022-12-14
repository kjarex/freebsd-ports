PORTNAME=	see
PORTVERSION=	3.1.1424
PORTREVISION=	4
CATEGORIES=	lang devel
MASTER_SITES=	http://download.openpkg.org/components/cache/see/ \
		http://lil.fr.distfiles.macports.org/see/ \
		ftp://ftp.mirrorservice.org/sites/distfiles.macports.org/see/ \
		ftp://mirror.csclub.uwaterloo.ca/MacPorts/mpdistfiles/see/

MAINTAINER=	numisemis@yahoo.com
COMMENT=	Simple ECMAScript Engine (SEE)
WWW=		http://www.adaptive-enterprises.com.au/~d/software/see/

LICENSE=	BSD3CLAUSE DTOA.C
LICENSE_COMB=	multi
LICENSE_NAME_DTOA.C=	License of dtoa.c
LICENSE_FILE_BSD3CLAUSE=	${WRKSRC}/COPYING
LICENSE_FILE_DTOA.C=	${WRKSRC}/COPYING
LICENSE_PERMS_DTOA.C=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

BROKEN_aarch64=	fails to build: error: "Exactly one of IEEE_8087, IEEE_MC68k, VAX, or IBM should be defined."
BROKEN_riscv64=	fails to build: error: "Exactly one of IEEE_8087, IEEE_MC68k, VAX, or IBM should be defined."

OPTIONS_DEFINE=	GC DEBUG DOCS
OPTIONS_DEFAULT=	GC
GC_DESC=	Use Boehm-Weiser garbage collection package
DEBUG_DESC=	Internal SEE library debugging

CONFLICTS=	see-devel

USES=		libtool pathfix perl5
USE_LDCONFIG=	yes
USE_PERL5=	build
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

CFLAGS+=	-O3
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-lpthread -L${LOCALBASE}/lib

DEBUG_CFLAGS_OFF=	-DNDEBUG
GC_LIB_DEPENDS=		libgc.so:devel/boehm-gc
GC_CONFIGURE_WITH=	boehm-gc

post-patch:
	@${REINPLACE_CMD} -e "s|PACKAGE_BUGREPORT='leonard@users|PACKAGE_BUGREPORT='leonard\\\@users|" \
		${WRKSRC}/configure

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in doc/USAGE.html AUTHORS NEWS README TODO COPYING
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
