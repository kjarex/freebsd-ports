PORTNAME=	notification

COMMENT=	New mail notification plugin for Claws Mail
WWW=		https://www.claws-mail.org/plugin.php?plugin=notification

LIB_DEPENDS=	libcanberra-gtk.so:audio/libcanberra-gtk2 \
		libnotify.so:devel/libnotify

CLAWS_PLUGINS_BUILD=	${PORTNAME}

.include "../claws-mail/Makefile.claws"
.include <bsd.port.mk>
