PORTNAME=	fcitx-anthy
PORTVERSION=	0.2.3
PORTREVISION=	1
CATEGORIES=	japanese
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	Anthy support for Fcitx
WWW=		https://fcitx-im.org/wiki/Fcitx

LICENSE=	GPLv2

BUILD_DEPENDS=	bash:shells/bash
LIB_DEPENDS=	libfcitx-config.so:chinese/fcitx \
		libanthy.so:japanese/anthy

USES=		cmake gettext gnome pkgconfig tar:xz

.include <bsd.port.mk>
