PORTNAME=	ucl
PORTVERSION=	0.8.1
PORTREVISION=	1
CATEGORIES=	textproc python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	UCL parser and emmitter
WWW=		https://github.com/vstakhov/libucl/

LICENSE=	MIT
LICENSE_FILE=	${WRKDIR}/libucl-${PORTVERSION}/COPYING

LIB_DEPENDS=	libucl.so:textproc/libucl

CFLAGS+=	-I${PREFIX}/include

USES=		python:3.6+
USE_GITHUB=	yes
USE_PYTHON=	autoplist concurrent distutils

GH_ACCOUNT=	vstakhov
GH_PROJECT=	libucl

WRKSRC_SUBDIR=	python

.include <bsd.port.mk>
