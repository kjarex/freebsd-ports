PORTNAME=	XML_Serializer
PORTVERSION=	0.21.0
CATEGORIES=	devel www pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PEAR Swiss-army knive for reading and writing XML files
WWW=		https://pear.php.net/package/XML_Serializer

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${PEARDIR}/XML/Parser.php:devel/pear-XML_Parser@${PHP_FLAVOR} \
		${PEARDIR}/XML/Util.php:devel/pear-XML_Util@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/XML/Parser.php:devel/pear-XML_Parser@${PHP_FLAVOR} \
		${PEARDIR}/XML/Util.php:devel/pear-XML_Util@${PHP_FLAVOR}

USES=		pear

NO_ARCH=	yes

.include <bsd.port.mk>
