PORTNAME=	epson-inkjet-printer-escpr
DISTVERSION=	1.7.21
DISTVERSIONSUFFIX=	-1lsb3.2
CATEGORIES=	print
MASTER_SITES=	https://download3.ebz.epson.net/dsc/f/03/00/13/77/93/e85dc2dc266e96fdc242bd95758bd88d1a51963e/

MAINTAINER=	tatsuki_makino@hotmail.com
COMMENT=	Epson Inkjet Printer Driver (ESC/P-R) for Linux
WWW=		https://download.ebz.epson.net/dsc/search/01/search/?OSC=LX

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libcupsimage.so:print/cups
RUN_DEPENDS=	${LOCALBASE}/libexec/cups/filter/gstoraster:print/cups-filters

USES=		autoreconf dos2unix libtool
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-lsb
INSTALL_TARGET=	install-strip
# PORTSCOUT=ignore:1 MASTER_SITES is changed in each version
PORTSCOUT=	ignore:1
SUB_FILES=	pkg-message
WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTVERSION}
PORTDOCS=	AUTHORS NEWS README README.ja

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
