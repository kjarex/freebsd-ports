PORTNAME=	creole
PORTVERSION=	1.4.9
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-${PORTNAME}-${PORTVERSION}

MAINTAINER=	count@211.ru
COMMENT=	Markup converter in pure Python
WWW=		https://pypi.org/project/python-creole/

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/docutils/__init__.py:textproc/py-docutils@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	distutils autoplist

.include <bsd.port.pre.mk>

PYDISTUTILS_INSTALLARGS+=	--install-data ${DATADIR}

.include <bsd.port.post.mk>
