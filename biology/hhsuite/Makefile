PORTNAME=	hhsuite
DISTVERSIONPREFIX=	v
DISTVERSION=	3.3.0
PORTREVISION=	1
CATEGORIES=	biology science

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Remote protein homology detection suite
WWW=		https://github.com/soedinglab/hh-suite

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_armv7=	compilation fails: no member named 'neon_f64' in 'simde__m128d_private', see https://github.com/soedinglab/hh-suite/issues/322

LIB_DEPENDS=	libmpi.so:net/openmpi

USES=		compiler:c++11-lang cmake perl5 python shebangfix
SHEBANG_GLOB=	*.pl *.py
USE_GITHUB=	yes
GH_ACCOUNT=	soedinglab
GH_PROJECT=	hh-suite

LDFLAGS+=	-Wl,-rpath,${LOCALBASE}/mpi/openmpi/lib -L${LOCALBASE}/mpi/openmpi/lib -lmpi # force linking to openmpi, and not to mpich

.if !exists(/usr/include/omp.h)
PLIST_SUB+=	OPENMP="@comment "
.else
PLIST_SUB+=	OPENMP=""
.endif

.include <bsd.port.options.mk>

.if ${ARCH} == aarch64
CMAKE_ON=	HAVE_ARM8
.elif ${ARCH} == amd64 || ${ARCH} == i386
CMAKE_ON=	HAVE_SSE2
.elif ${ARCH} == powerpc64le
CMAKE_ON=	HAVE_POWER8
.endif

.include <bsd.port.mk>
