PORTNAME=	odt2txt
PORTVERSION=	0.5
DISTVERSIONPREFIX=	v
CATEGORIES=	textproc

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Simple converter from OpenDocument Text to plain text
WWW=		https://github.com/dstosberg/odt2txt

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/GPL-2

USES=		gmake iconv localbase

PLIST_FILES=	bin/odt2txt \
		share/man/man1/odt2txt.1.gz

GH_ACCOUNT=	dstosberg
USE_GITHUB=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g; s|-liconv|${ICONV_LIB}|' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/odt2txt ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/odt2txt.1 ${STAGEDIR}${PREFIX}/share/man/man1/

.include <bsd.port.mk>
