PORTNAME=	telegramqml
PORTVERSION=	0.9.2
DISTVERSIONPREFIX=	v
PORTREVISION=	4
CATEGORIES=	net-im

MAINTAINER=	henry.hu.sh@gmail.com
COMMENT=	Telegram API tools for QtQML and Qml
WWW=		https://github.com/Aseman-Land/TelegramQML

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libqtelegram-ae.so:net-im/libqtelegram-ae

USE_GITHUB=	yes
GH_ACCOUNT=	Aseman-Land
GH_PROJECT=	TelegramQML

USES=		compiler:c++11-lang qmake:outsource qt:5 ssl
USE_QT=		qmake:build buildtools:build core declarative sql xml multimedia
USE_LDCONFIG=	yes
QMAKE_ARGS=	BUILD_MODE+=lib \
		LIBQTELEGRAM_INCLUDE_PATH="${LOCALBASE}/include/libqtelegram-ae"

post-patch:
	@${REINPLACE_CMD} -e "/isEmpty(OPENSSL_INCLUDE_PATH)/d" \
		${WRKSRC}/telegramqml.pri

.include <bsd.port.mk>
