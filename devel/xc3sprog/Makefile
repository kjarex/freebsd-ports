PORTNAME=	xc3sprog
PORTVERSION=	r769
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://opsec.eu/src/xc3sprog/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Free programmer for Xilinx Spartan S3E Starter Kit
WWW=		https://sourceforge.net/projects/xc3sprog/

LIB_DEPENDS=	libftdi.so:devel/libftdi
RUN_DEPENDS=	${LOCALBASE}/sbin/fxload:misc/fxload

USES=		tar:xz cmake:insource
ALL_TARGET=	xc3sprog

PLIST_FILES=	bin/xc3sprog

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xc3sprog ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
