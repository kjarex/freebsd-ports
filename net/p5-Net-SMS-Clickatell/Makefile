PORTNAME=	Net-SMS-Clickatell
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	freebsd.ports@tipstrade.net
COMMENT=	Access to Clickatell SMS messaging service
WWW=		https://metacpan.org/release/Net-SMS-Clickatell

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-libwww>=5.816:www/p5-libwww

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${FIND} ${WRKSRC} -name '*.orig' -delete

.include <bsd.port.mk>
