PORTNAME=	libmsym
DISTVERSIONPREFIX=	v
DISTVERSION=	0.2.3
DISTVERSIONSUFFIX=	-paper
CATEGORIES=	science

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Molecular point group symmetry library
WWW=		https://github.com/mcodev31/libmsym

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake
USE_GITHUB=	yes
GH_ACCOUNT=	mcodev31
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DBUILD_SHARED_LIBS:BOOL=ON

.include <bsd.port.mk>
