PORTNAME=	libmodplug
PORTVERSION=	0.8.9.0
CATEGORIES=	audio
MASTER_SITES=	SF/modplug-xmms/${PORTNAME}/${PORTVERSION} LOCAL/ehaupt

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	ModPlug mod-like music shared libraries
WWW=		http://modplug-xmms.sourceforge.net/

LICENSE=	PD
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cpe pathfix pkgconfig libtool
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CPE_VENDOR=	konstanty_bialkowski

post-patch:
	@${REINPLACE_CMD} -e '/^CXXFLAGS=/d' \
		${WRKSRC}/configure

.include <bsd.port.mk>
