PORTNAME=	Net_SMS
PORTVERSION=	0.2.1
CATEGORIES=	net pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PEAR SMS functionality
WWW=		https://pear.php.net/package/Net_SMS

BUILD_DEPENDS=	${PEARDIR}/Mail.php:mail/pear-Mail@${PHP_FLAVOR} \
		${PEARDIR}/HTTP/Request.php:www/pear-HTTP_Request@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/Mail.php:mail/pear-Mail@${PHP_FLAVOR} \
		${PEARDIR}/HTTP/Request.php:www/pear-HTTP_Request@${PHP_FLAVOR}

USE_PHP=	gettext
USES=		pear php

.include <bsd.port.mk>
