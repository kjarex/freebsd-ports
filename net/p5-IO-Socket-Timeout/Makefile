PORTNAME=	IO-Socket-Timeout
PORTVERSION=	0.32
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	pi@FreeBSD.org
COMMENT=	IO::Socket with read/write timeout
WWW=		https://metacpan.org/release/IO-Socket-Timeout

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-PerlIO-via-Timeout>=0.32:devel/p5-PerlIO-via-Timeout

NO_ARCH=	yes

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
