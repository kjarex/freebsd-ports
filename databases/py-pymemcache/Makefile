PORTNAME=	pymemcache
PORTVERSION=	3.5.2
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ale_sagra@hotmail.com
COMMENT=	Comprehensive, fast, pure-Python memcached client
WWW=		https://github.com/pinterest/pymemcache

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} -m pytest -rs -v

.include <bsd.port.mk>
