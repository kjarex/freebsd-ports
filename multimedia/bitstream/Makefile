PORTNAME=	bitstream
PORTVERSION=	1.5
CATEGORIES=	multimedia
MASTER_SITES=	https://get.videolan.org/bitstream/${PORTVERSION}/ \
		http://get.videolan.org/bitstream/${PORTVERSION}/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Binary MPEG, DVB, IETF, etc. structures access library
WWW=		https://www.videolan.org/developers/bitstream.html

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake tar:bzip2
NO_BUILD=	yes
NO_ARCH=	yes
MAKE_ARGS=	PKGCONFIG="${STAGEDIR}${PREFIX}/libdata/pkgconfig"
TEST_TARGET=	check

PORTDOCS=	AUTHORS README NEWS TODO

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|^	@|	|' ${WRKSRC}/Makefile

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${DOCSDIR}/
.endfor

.include <bsd.port.mk>
