PORTNAME=	lzfse
PORTVERSION=	20160707
CATEGORIES=	archivers

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Lempel-Ziv style data compression algorithm
WWW=		https://github.com/lzfse/lzfse

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_TAGNAME=	4591228

USES=	gmake
MAKE_ARGS+=	INSTALL_PREFIX="${STAGEDIR}${PREFIX}"

.include <bsd.port.mk>
