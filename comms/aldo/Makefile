PORTNAME=	aldo
DISTVERSION=	0.7.7
PORTREVISION=	3
CATEGORIES=	comms hamradio
MASTER_SITES=	SAVANNAH

MAINTAINER=	lambert@lambertfam.org
COMMENT=	Morse code training program
WWW=		https://www.nongnu.org/aldo/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libao.so:audio/libao

USES=		compiler:c++0x gmake localbase tar:bzip2
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/aldo \
		man/man1/aldo.1.gz

.include <bsd.port.mk>
