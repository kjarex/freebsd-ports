PORTNAME=	woff2
DISTVERSIONPREFIX=	v
DISTVERSION=	1.0.2
PORTREVISION=	4
CATEGORIES=	devel

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Library and converter tools for the WOFF 2.0 web font format
WWW=		https://github.com/google/woff2

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libbrotlidec.so:archivers/brotli

USES=		cmake compiler:c++11-lib
USE_GITHUB=	yes
GH_ACCOUNT=	google
USE_LDCONFIG=	yes

PLIST_SUB=	SHLIBVER=${DISTVERSION}

.include <bsd.port.mk>
