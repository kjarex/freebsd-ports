PORTNAME=	Devel-Events-Objects
PORTVERSION=	0.05
PORTREVISION=	3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module providing object tracking support for Devel::Events
WWW=		https://metacpan.org/release/Devel-Events-Objects

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Devel-Events>=0:devel/p5-Devel-Events \
		p5-Task-Weaken>=0:devel/p5-Task-Weaken \
		p5-Tie-RefHash-Weak>=0:devel/p5-Tie-RefHash-Weak \
		p5-Variable-Magic>=0:devel/p5-Variable-Magic

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
