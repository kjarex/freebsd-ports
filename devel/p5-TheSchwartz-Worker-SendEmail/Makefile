PORTNAME=	TheSchwartz-Worker-SendEmail
PORTVERSION=	1.00
PORTREVISION=	3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BRADFITZ
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	TheSchwartz Worker Task to Send Email
WWW=		https://metacpan.org/release/TheSchwartz-Worker-SendEmail

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-TheSchwartz>=1.10:devel/p5-TheSchwartz \
		p5-Net-DNS>=0.66_1:dns/p5-Net-DNS

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
