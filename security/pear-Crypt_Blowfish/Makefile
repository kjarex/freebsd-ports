PORTNAME=	Crypt_Blowfish
DISTVERSION=	1.1.0RC2
CATEGORIES=	security www pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PEAR class for blowfish encryption
WWW=		https://pear.php.net/package/Crypt_Blowfish

USES=		pear

OPTIONS_DEFINE=	MCRYPT
MCRYPT_DESC=	Additional MCrypt PHP support

MCRYPT_USES=	php
MCRYPT_USE=	PHP=mcrypt

pre-fetch:
	@${ECHO_CMD} ""
	@${ECHO_CMD} "You may set envirtonment variable WITH_PHP_MCRYPT to include"
	@${ECHO_CMD} "additional MCrypt PHP support"
	@${ECHO_CMD} ""

post-patch:
.for file in ${FILES}
	@${REINPLACE_CMD} -e "s|@package_version@|${PORTVERSION}|" ${WRKSRC}/${file}
.endfor

.include <bsd.port.mk>
