PORTNAME=	libr3
PORTVERSION=	1.0.0
PORTREVISION=	2
CATEGORIES=	devel

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	URL router library with high performance
WWW=		https://github.com/c9s/r3

LICENSE=	MIT

LIB_DEPENDS=	libcheck.so:devel/check \
		libgvc.so:graphics/graphviz \
		libpcre.so:devel/pcre

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-graphviz
USES=		autoreconf libtool pathfix pkgconfig
INSTALL_TARGET=	install-strip

USE_GITHUB=	yes
GH_ACCOUNT=	c9s
GH_PROJECT=	r3

.include <bsd.port.mk>
