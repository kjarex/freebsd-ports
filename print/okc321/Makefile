PORTNAME=	okc321
PORTVERSION=	1.1
CATEGORIES=	print
MASTER_SITES=	https://www.oki.com/printing/download/
DISTNAME=	C531_C331_C321_Linux_110_31034

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PPDs for the Oki C321dn, C331dn, and C531dn printers
WWW=		https://www.oki.com/de/printing/support/drivers-and-utilities/colour/44951534/

LICENSE=	GPLv2

USES=		zip
NO_BUILD=	yes
NO_ARCH=	yes
WRKSRC=		${WRKDIR}/C531_C331_C321_Linux_110

PLIST_FILES=	share/ppd/${PORTNAME}/Oki/OKC321_a110.ppd.gz \
		share/ppd/${PORTNAME}/Oki/OKC331_a110.ppd.gz \
		share/ppd/${PORTNAME}/Oki/OKC531_a110.ppd.gz \
		share/cups/model/${PORTNAME}

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/cups/model
	${MKDIR} ${STAGEDIR}${PREFIX}/share/ppd/${PORTNAME}/Oki
	${INSTALL_DATA} ${WRKSRC}/OKC321_a110.ppd.gz ${STAGEDIR}${PREFIX}/share/ppd/${PORTNAME}/Oki
	${INSTALL_DATA} ${WRKSRC}/OKC331_a110.ppd.gz ${STAGEDIR}${PREFIX}/share/ppd/${PORTNAME}/Oki
	${INSTALL_DATA} ${WRKSRC}/OKC531_a110.ppd.gz ${STAGEDIR}${PREFIX}/share/ppd/${PORTNAME}/Oki
	${LN} -sf ${LOCALBASE}/share/ppd/${PORTNAME}/Oki ${STAGEDIR}${PREFIX}/share/cups/model/${PORTNAME}

.include <bsd.port.mk>
