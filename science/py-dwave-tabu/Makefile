PORTNAME=	dwave-tabu
DISTVERSION=	0.4.5
CATEGORIES=	science python # quantum-computing
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	DWave: Tabu solver for QUBO/Ising problems
WWW=		https://github.com/dwavesystems/dwave-tabu

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

PY_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dimod>0:science/py-dimod@${PY_FLAVOR} \
		${PYNUMPY}
BUILD_DEPENDS=	${PY_DEPENDS} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0.30.0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PY_DEPENDS}

USES=		python:3.7+
USE_PYTHON=	distutils cython autoplist

TEST_ENV=	${MAKE_ENV} PYTHONPATH=${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}

do-test:
	@${SETENV} ${TEST_ENV} ${PYTHON_CMD} ${FILESDIR}/example.py

.include <bsd.port.mk>
