PORTNAME=	protocol-rack
PORTVERSION=	0.1.6
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	01

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Implementation of the Rack protocol/specification
WWW=		https://github.com/socketry/protocol-rack

LICENSE=	MIT

RUN_DEPENDS=	rubygem-protocol-http>=0.23.4<0.24:www/rubygem-protocol-http \
		rubygem-rack>=1.0,3:www/rubygem-rack

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PORTSCOUT=	limit:^0\.1\.

.include <bsd.port.mk>
