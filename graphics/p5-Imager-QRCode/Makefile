PORTNAME=	Imager-QRCode
PORTVERSION=	0.035
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate QR Code with Imager using libqrencode
WWW=		https://metacpan.org/release/Imager-QRCode

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Imager>=0.55:graphics/p5-Imager

MAKE_JOBS_UNSAFE=	yes
USES=		localbase perl5
USE_PERL5=	configure

.include <bsd.port.mk>
