PORTNAME=	arduino-ctags
PORTVERSION=	5.8
DISTVERSIONSUFFIX=	-arduino11
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	kevans@FreeBSD.org
COMMENT=	Feature-filled tagfile generator used by Arduino 1.6
WWW=		https://github.com/arduino/ctags

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BINDIR=		arduino/tools-builder/ctags/${PORTVERSION}${DISTVERSIONSUFFIX}
PLIST_FILES=	${BINDIR}/ctags

USE_GITHUB=	yes
GH_ACCOUNT=	arduino
GH_PROJECT=	ctags

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--enable-macro-patterns --bindir="${STAGEDIR}${PREFIX}/${BINDIR}"

ALL_TARGET=	ctags
INSTALL_TARGET=	install-cbin

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${BINDIR}/ctags

.include <bsd.port.mk>
