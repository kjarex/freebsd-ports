PORTNAME=	Email-Sender-Transport-SQLite
PORTVERSION=	0.092002
PORTREVISION=	1
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bill.brinzer@gmail.com
COMMENT=	Deliver mail to an SQLite db for testing
WWW=		https://metacpan.org/release/Email-Sender-Transport-SQLite

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DBD-SQLite>=0:databases/p5-DBD-SQLite \
		p5-DBI>=0:databases/p5-DBI \
		p5-Email-Sender>=0.091660:mail/p5-Email-Sender
TEST_DEPENDS=	p5-Capture-Tiny>=0:devel/p5-Capture-Tiny

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
