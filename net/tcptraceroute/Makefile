PORTNAME=	tcptraceroute
PORTVERSION=	1.5beta7
PORTREVISION=	1
DISTVERSIONPREFIX=	tcptraceroute-
CATEGORIES=	net

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Traceroute implementation using TCP packets
WWW=		https://github.com/mct/tcptraceroute

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libnet.so:net/libnet

USES=		gmake localbase

GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	DOCS

GH_ACCOUNT=	mct
USE_GITHUB=	yes

PORTSCOUT=	ignore:1

.include <bsd.port.mk>
