PORTNAME=	qxmpp
DISTVERSIONPREFIX=	v
DISTVERSION=	1.4.0
CATEGORIES=	net-im
PKGNAMESUFFIX=	-qt5

MAINTAINER=	kde@FreeBSD.org
COMMENT=	XMPP client library based on Qt and C++
WWW=		https://github.com/qxmpp-project/qxmpp/

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE.LGPL

USES=		cmake compiler:c++17-lang libtool pathfix pkgconfig qt:5
USE_QT=		core gui network xml \
		buildtools:build qmake:build testlib:build

USE_GITHUB=	yes
GH_ACCOUNT=	qxmpp-project

PLIST_SUB=	VERSION=${PORTVERSION}

.include <bsd.port.mk>
