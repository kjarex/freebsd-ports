PORTNAME=	stm32flash
DISTVERSION=	0.7
CATEGORIES=	cad
MASTER_SITES=	SF/${PORTNAME}/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Flash program for STM32 using the ST serial bootloader
WWW=		https://sourceforge.net/projects/stm32flash/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/gpl-2.0.txt

USES=		gmake

PLIST_FILES=	bin/stm32flash \
		share/man/man1/stm32flash.1.gz

post-stage:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/stm32flash

.include <bsd.port.mk>
