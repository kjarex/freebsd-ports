PORTNAME=	fam
PORTVERSION=	1.1.1
PORTREVISION=	3
CATEGORIES=	devel python
MASTER_SITES=	SF/python-${PORTNAME}/python-${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-fam-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python Interface to the File Alteration Monitor
WWW=		http://python-fam.sourceforge.net/

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		python:3.6+ fam
USE_PYTHON=	distutils autoplist

pre-patch:
	${INSTALL_DATA} ${FILESDIR}/setup.py ${WRKSRC}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/_fam*.so

.include <bsd.port.mk>
