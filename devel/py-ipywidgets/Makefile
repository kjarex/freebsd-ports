PORTNAME=	ipywidgets
PORTVERSION=	7.6.5
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Interactive HTML widgets for Jupyter notebooks and the IPython kernel
WWW=		https://ipywidgets.readthedocs.io

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ipykernel5>=4.5.1:devel/py-ipykernel5@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ipython>=4.0.0:devel/ipython@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nbformat>=4.2.0:devel/py-nbformat@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}traitlets>=4.3.1:devel/py-traitlets@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}widgetsnbextension>=3.5.0:devel/py-widgetsnbextension@${PY_FLAVOR}

USES=		python:3.7+
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
