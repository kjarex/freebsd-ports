PORTNAME=	rtrlib
PORTVERSION=	0.8.0
DISTVERSIONPREFIX=	v
CATEGORIES=	net-mgmt sysutils

MAINTAINER=	freebsd@bodems.net
COMMENT=	Open-source C implementation of the RPKI/Router Protocol client
WWW=		https://rtrlib.realmv6.org/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libssh.so:security/libssh

USES=		cmake
USE_GITHUB=	yes
USE_LDCONFIG=	yes

.include <bsd.port.mk>
