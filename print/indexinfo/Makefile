PORTNAME=	indexinfo
PORTVERSION=	0.3.1
CATEGORIES=	print ports-mgmt

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Utility to regenerate the GNU info page index
WWW=		https://github.com/bapt/indexinfo

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USE_CSTD=	gnu99
USE_GITHUB=	yes
GH_ACCOUNT=	bapt
INSTALL_TARGET=	install-strip
PLIST_FILES=	bin/indexinfo

.if exists(/usr/include/sys/capsicum.h)
CFLAGS+=	-DHAVE_CAPSICUM
.endif

.include <bsd.port.mk>
