PORTNAME=	libyang
PORTVERSION=	1.0.240
DISTVERSIONPREFIX=	v
CATEGORIES=	net

MAINTAINER=	olivier@FreeBSD.org
COMMENT=	YANG data modeling language library
WWW=		https://github.com/CESNET/libyang

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libpcre.so:devel/pcre
TEST_DEPENDS=	cmocka>0:sysutils/cmocka

USES=	cmake compiler:c++11-lang cpe pkgconfig
CPE_VENDOR=	cesnet
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	CESNET

CMAKE_ARGS+=	-DENABLE_LYD_PRIV=ON

TEST_TARGET=	test

OPTIONS_DEFINE=	TEST

TEST_CMAKE_BOOL=	ENABLE_BUILD_TESTS

.include <bsd.port.mk>
