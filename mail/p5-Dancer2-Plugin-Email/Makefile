PORTNAME=	Dancer2-Plugin-Email
PORTVERSION=	0.0202
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple email handling for Dancer2 applications
WWW=		https://metacpan.org/release/Dancer2-Plugin-Email

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Dancer2>=0.200000:www/p5-Dancer2 \
		p5-Email-Date-Format>=0:mail/p5-Email-Date-Format \
		p5-Email-Sender>=0:mail/p5-Email-Sender \
		p5-File-Type>=0:devel/p5-File-Type \
		p5-IO-Socket-SSL>=2.000:security/p5-IO-Socket-SSL \
		p5-MIME-Tools>=0:mail/p5-MIME-Tools \
		p5-Module-Runtime>=0:devel/p5-Module-Runtime
TEST_DEPENDS=	p5-HTTP-Message>=0:www/p5-HTTP-Message \
		p5-Plack>=1.0029:www/p5-Plack

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
