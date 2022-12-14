PORTNAME=	fenics-basix
DISTVERSIONPREFIX=	v
DISTVERSION=	0.5.0.post0
CATEGORIES=	math
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	FEniCS finite element basis evaluation library
WWW=		https://github.com/FEniCS/basix

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/../LICENSE

BUILD_DEPENDS=	pybind11>=2.6.4:devel/pybind11 \
		cmake-core>=3.16:devel/cmake-core \
		xtensor>0:math/xtensor \
		xtl-quant-stack>0:devel/xtl-quant-stack \
		${PYTHON_PKGNAMEPREFIX}pip>0:devel/py-pip@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pybind11>0:devel/py-pybind11@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scikit-build>=0.12:devel/py-scikit-build@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>0:devel/py-wheel@${PY_FLAVOR}
LIB_DEPENDS=	libbasix.so:math/fenics-basix
RUN_DEPENDS=	${PYNUMPY}

USES=		localbase python
USE_PYTHON=	distutils autoplist pytest # pytest doesn't find any tests, see https://github.com/FEniCS/basix/issues/590

USE_GITHUB=	yes
GH_ACCOUNT=	FEniCS
GH_PROJECT=	basix

WRKSRC_SUBDIR=	python

.include <bsd.port.mk>
