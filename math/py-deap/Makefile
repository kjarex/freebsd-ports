PORTNAME=	deap
DISTVERSION=	1.3.2
CATEGORIES=	math biology science devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Distributed Evolutionary Algorithms in Python
WWW=		https://github.com/DEAP/deap

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}

USES=		python:3.5+
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
