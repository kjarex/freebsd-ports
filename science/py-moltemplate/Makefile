PORTNAME=	moltemplate
DISTVERSION=	2.20.6
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Tool to prepare simulations of molecules, complex molecular assemblies
WWW=		https://www.moltemplate.org/

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest-runner>0:devel/py-pytest-runner@${PY_FLAVOR}
RUN_DEPENDS=	${PYNUMPY} \
		bash:shells/bash
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>0:devel/py-pytest@${PY_FLAVOR}

USES=		python:3.6+ shebangfix
SHEBANG_FILES=	moltemplate/scripts/molc.sh
USE_PYTHON=	distutils concurrent autoplist

NO_ARCH=	yes

do-test: # testsuite fails to run: https://github.com/jewettaij/moltemplate/issues/65
	@cd ${WRKSRC} && pytest

.include <bsd.port.mk>
