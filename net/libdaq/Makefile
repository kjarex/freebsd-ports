PORTNAME=	libdaq
DISTVERSIONPREFIX=	v
DISTVERSION=	3.0.9
CATEGORIES=	net

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Data Acquisition abstraction library for snort 3.0+
WWW=		https://www.snort.org/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpcap.so:net/libpcap	# avoid base libpcap

USES=		autoreconf compiler:c++11-lang libtool pkgconfig
USE_GITHUB=	yes
USE_LDCONFIG=	yes

GH_ACCOUNT=	snort3
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib
INSTALL_TARGET=	install-strip

CONFLICTS=	daq-2*

.include <bsd.port.mk>
