PORTNAME=	Net-SAP
PORTVERSION=	0.10
PORTREVISION=	4
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Session Announcement Protocol (rfc2974) packet parser
WWW=		https://metacpan.org/release/Net-SAP

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IO-Interface>=0:net/p5-IO-Interface \
		p5-IO-Socket-Multicast6>=0:net/p5-IO-Socket-Multicast6 \
		p5-Net-SDP>=0:net/p5-Net-SDP

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
