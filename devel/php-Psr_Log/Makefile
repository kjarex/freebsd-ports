PORTNAME=	Psr_Log
PORTVERSION=	1.0.2
CATEGORIES=	devel
PKGNAMEPREFIX=	php-
DIST_SUBDIR=	PSR

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	PSR-3 logger interface
WWW=		https://github.com/php-fig/log

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	php-fig
GH_PROJECT=	log

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	share/pear/Psr/Log/AbstractLogger.php \
		share/pear/Psr/Log/InvalidArgumentException.php \
		share/pear/Psr/Log/LogLevel.php \
		share/pear/Psr/Log/LoggerAwareInterface.php \
		share/pear/Psr/Log/LoggerAwareTrait.php \
		share/pear/Psr/Log/LoggerInterface.php \
		share/pear/Psr/Log/LoggerTrait.php \
		share/pear/Psr/Log/NullLogger.php \
		share/pear/Psr/Log/Test/LoggerInterfaceTest.php

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/pear/Psr/Log/Test
.for file in ${PLIST_FILES}
	${INSTALL_DATA} ${WRKSRC}/${file:S/share\/pear\///} ${STAGEDIR}${PREFIX}/${file}
.endfor

.include <bsd.port.mk>
