PORTNAME=	dsbbatmon
DISTVERSION=	1.0.6
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	http://freeshell.de/~mk/download/

MAINTAINER=	mk@nic-nac-project.org
COMMENT=	Qt battery monitor
WWW=		https://freeshell.de/~mk/projects/dsbbatmon.html

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		compiler:c++11-lang gl qmake qt:5 tar:tgz

USE_GL=		gl
USE_QT=		buildtools:build core gui linguisttools:build widgets

.include <bsd.port.mk>
