PORTNAME=	flang
DISTVERSION=	7.0-g20191020
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	jmd@FreeBSD.org
COMMENT=	Fortran compiler targeting LLVM
WWW=		https://github.com/flang-compiler/flang

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

DEPRECATED=	Very outdated and unsupported upstream, current version in tree is several years old and upstream is still active
EXPIRATION_DATE=2022-09-30

ONLY_FOR_ARCHS=	amd64

LLVM_VER=	70
BUILD_DEPENDS=	llvm${LLVM_VER}>=0:devel/llvm${LLVM_VER} \
		flang-clang>=0:devel/flang-clang
RUN_DEPENDS=	llvm${LLVM_VER}>=0:devel/llvm${LLVM_VER} \
		flang-clang>=0:devel/flang-clang
LIB_DEPENDS=	libpgmath.so:math/libpgmath

USES=		cmake:noninja compiler:c++11-lib libedit perl5 tar:xz \
		shebangfix
_USES_PYTHON?=	python:build
USES+=		${_USES_PYTHON}
USE_LDCONFIG=	${PREFIX}/flang/lib

USE_GITHUB=	yes
GH_ACCOUNT=	flang-compiler
GH_TAGNAME=	d07daf3

CMAKE_ARGS+=	-DLLVM_CONFIG=${LOCALBASE}/bin/llvm-config${LLVM_VER} \
		-DCMAKE_CXX_COMPILER=${LOCALBASE}flang/bin/clang++ \
		-DCMAKE_C_COMPILER=${LOCALBASE}/flang/bin/clang \
		-DCMAKE_Fortran_COMPILER=${LOCALBASE}/flang/bin/flang \
		-DFLANG_LIBOMP=${LOCALBASE}/llvm${LLVM_VER}/lib/libomp.so \
		-DLIBPGMATH="${LOCALBASE}/lib/libpgmath.a" \
		-WWITH_ERROR=OFF

CMAKE_INSTALL_PREFIX=	${PREFIX}/flang

# fix on post LLVM11 HEAD
CFLAGS+=	-fcommon

MAKE_JOBS_UNSAFE=	yes

OPTIONS_DEFINE=	TESTS

TESTS_DESC=	build unit tests for flang

TESTS_CMAKE_BOOL=	FLANG_INCLUDE_TESTS

post-patch:
	@${CP} -r  ${WRKSRC}/tools/flang2/flang2exe/x86_64-Linux ${WRKSRC}/tools/flang2/flang2exe/x86_64-FreeBSD

.include <bsd.port.mk>
