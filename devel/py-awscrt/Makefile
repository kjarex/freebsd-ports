PORTNAME=	awscrt
PORTVERSION=	0.13.14
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Common runtime for AWS Python projects
WWW=		https://github.com/awslabs/aws-crt-python

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	cmake:devel/cmake-core

USES=		python:3.6+
USE_PYTHON=	autoplist concurrent distutils

CFLAGS+=	-D__BSD_VISIBLE

post-install:
	${FIND} ${STAGEDIR}${PYTHON_SITELIBDIR} -name '*.so' -exec ${STRIP_CMD} {} +

.include <bsd.port.mk>
