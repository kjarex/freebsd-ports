PORTNAME=	dwave-preprocessing
DISTVERSION=	0.4.0
PORTREVISION=	1
CATEGORIES=	science python # quantum-computing
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	DWave: Preprocessing tools to aid in solving binary quadratic models
WWW=		https://github.com/dwavesystems/dwave-preprocessing

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

PY_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dimod>0:science/py-dimod@${PY_FLAVOR} \
		${PYNUMPY}
BUILD_DEPENDS=	${PY_DEPENDS} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0.30.0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PY_DEPENDS}
xTEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dwave-system>0:science/dwave-system@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}parameterized>0:devel/py-parameterized@${PY_FLAVOR}

USES=		python:3.7+
USE_PYTHON=	distutils cython unittest # 3 tests fail, see https://github.com/dwavesystems/dwave-preprocessing/issues/44

USE_GITHUB=	yes
GH_ACCOUNT=	dwavesystems

TEST_ENV=	${MAKE_ENV} PYTHONPATH=${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}
TEST_WRKSRC=	${WRKSRC}/tests

post-install:
	# strip binaries
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/dwave/preprocessing/cyfix_variables${PYTHON_EXT_SUFFIX}.so
	# remove conflicting __init__.py, see https://github.com/dwavesystems/dwave-preprocessing/issues/45
	@${RM} -r \
		${STAGEDIR}${PYTHON_SITELIBDIR}/dwave/__init__.py \
		${STAGEDIR}${PYTHON_SITELIBDIR}/dwave/__pycache__

.include <bsd.port.mk>
