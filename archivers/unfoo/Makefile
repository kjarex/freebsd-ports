PORTNAME=	unfoo
PORTVERSION=	1.0.8
DISTVERSIONPREFIX=	v
CATEGORIES=	archivers

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tiny sh(1) wrapper to simplify decompression of files
WWW=		https://github.com/vitaminmoo/unfoo

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	unace:archivers/unace \
		unrar:archivers/unrar \
		7zz:archivers/7-zip

USE_GITHUB=	yes
GH_ACCOUNT=	jlec

NO_BUILD=	yes
NO_ARCH=	yes
PLIST_FILES=	bin/${PORTNAME}

post-patch:
	@${REINPLACE_CMD} -e '1s|/.*|/bin/sh|;s|==|=|' ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}/${PREFIX}/bin

.include <bsd.port.mk>
