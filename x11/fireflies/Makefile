PORTNAME=	fireflies
PORTVERSION=	2.07
PORTREVISION=	8
CATEGORIES=	x11
MASTER_SITES=	http://somewhere.fscked.org/proj/fireflies/files/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Extension of xscreensaver
WWW=		http://somewhere.fscked.org/fireflies/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libgfx.so:graphics/libgfx

GNU_CONFIGURE=	yes
USES=		gl
USE_GL=		gl glu
EXTRACT_AFTER_ARGS=--exclude '${DISTNAME}/libgfx*'

CPPFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/GL
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--with-bindir=${LOCALBASE}/bin/xscreensaver-hacks \
		--with-confdir=${LOCALBASE}/share/xscreensaver/config
PLIST_SUB=	VERSION=${PORTVERSION}

MAKE_ARGS=	CONFIGURE_ENV=${CONFIGURE_ENV:Q} \
		CONFIGURE_SCRIPT=${CONFIGURE_SCRIPT:Q} \
		CONFIGURE_ARGS=${CONFIGURE_ARGS:Q}

.include <bsd.port.mk>
