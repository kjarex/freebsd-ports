PORTNAME=	corrade
DISTVERSIONPREFIX=	v
DISTVERSION=	2020.06
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++11/C++14 multiplatform utility library
WWW=		https://magnum.graphics/corrade/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake compiler:c++14-lang
USE_GITHUB=	yes
GH_ACCOUNT=	mosra
GH_TUPLE=	mosra:toolchains:b0ea02e:t/toolchains
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DLIB_SUFFIX:STRING=""

.include <bsd.port.mk>
