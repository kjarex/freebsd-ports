PORTNAME=	libqtelegram-ae
PORTVERSION=	6.1
PORTREVISION=	5
DISTVERSIONPREFIX=	v
DISTVERSIONSUFFIX=	-stable
CATEGORIES=	net-im

MAINTAINER=	henry.hu.sh@gmail.com
COMMENT=	Fork of libqtelegram by Aseman Team
WWW=		https://github.com/Aseman-Land/libqtelegram-aseman-edition

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	Aseman-Land
GH_PROJECT=	libqtelegram-aseman-edition

USES=		compiler:c++11-lang qmake:outsource qt:5 ssl
USE_QT=		qmake:build buildtools:build core gui network multimedia
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e "/OPENSSL_INCLUDE_PATH/d" \
		${WRKSRC}/libqtelegram-ae.pri

.include <bsd.port.mk>
