PORTNAME=	Data-Bind
PORTVERSION=	0.30
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to bind and alias variables
WWW=		https://metacpan.org/release/Data-Bind

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor>0:devel/p5-Class-Accessor	\
		p5-Devel-Caller>0:devel/p5-Devel-Caller \
		p5-Devel-LexAlias>0:devel/p5-Devel-LexAlias \
		p5-Data-Capture>0:devel/p5-Data-Capture
TEST_DEPENDS=	p5-Test-Exception>0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
