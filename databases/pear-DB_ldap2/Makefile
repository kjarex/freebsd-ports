PORTNAME=	DB_ldap2
PORTVERSION=	0.5.1
PORTREVISION=	1
CATEGORIES=	databases net pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PEAR DB compliant interface to LDAP v2 and v3 database
WWW=		https://pear.php.net/package/DB_ldap2

LICENSE=	LGPL3

BUILD_DEPENDS=	${PEARDIR}/DB.php:databases/pear-DB@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/DB.php:databases/pear-DB@${PHP_FLAVOR}

USES=		pear php
USE_PHP=	ldap

.include <bsd.port.mk>
