PORTNAME=	Net_LMTP
PORTVERSION=	1.0.2
CATEGORIES=	mail www pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PEAR implementation of the RFC2033 LMTP protocol
WWW=		https://pear.php.net/package/Net_LMTP

LICENSE=	PHP301

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:net/pear-Net_Socket@${PHP_FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		pear

.include <bsd.port.mk>
