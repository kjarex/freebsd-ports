PORTNAME=	zinnia
PORTVERSION=	0.6.0
CATEGORIES=	japanese
MASTER_SITES=	SF/zinnia/${PORTNAME}${PKGNAMESUFFIX}/${PORTVERSION}-20080911
PKGNAMESUFFIX=	-tomoe
DISTNAME=	${PORTNAME}${PKGNAMESUFFIX}-${PORTVERSION}-20080911

MAINTAINER=	beyert@cs.ucr.edu
COMMENT=	Handwriting recognition files for Zinnia (Tomoe data)
WWW=		http://zinnia.sourceforge.net/

LIB_DEPENDS=	libzinnia.so:japanese/zinnia
RUN_DEPENDS=	zinnia:japanese/zinnia

LICENSE=	LGPL21

USES=	tar:bzip2
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
