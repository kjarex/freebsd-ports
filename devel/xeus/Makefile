PORTNAME=	xeus
DISTVERSION=	0.24.4
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++ implementation of the Jupyter kernel protocol
WWW=		https://github.com/jupyter-xeus/xeus

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	cppzmq>0:net/cppzmq \
		nlohmann-json>0:devel/nlohmann-json \
		xtl-quant-stack>0:devel/xtl-quant-stack
LIB_DEPENDS=	libuuid.so:misc/e2fsprogs-libuuid \
		libzmq.so:net/libzmq4

USES=		cmake compiler:c++14-lang localbase:ldflags pkgconfig ssl
USE_GITHUB=	yes
GH_ACCOUNT=	jupyter-xeus
USE_LDCONFIG=	yes

CMAKE_OFF=	BUILD_STATIC_LIBS

OPTIONS_DEFINE=		NATIVE

NATIVE_DESC=		Build with native optimizations (-march=native)
NATIVE_CMAKE_ON=	-DXEUS_DISABLE_ARCH_NATIVE=OFF
NATIVE_CMAKE_OFF=	-DXEUS_DISABLE_ARCH_NATIVE=ON

.include <bsd.port.mk>
