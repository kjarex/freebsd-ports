PORTNAME=	Math-Series
PORTVERSION=	1.01
PORTREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl extension dealing with mathematic series
WWW=		https://metacpan.org/release/Math-Series

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Math-Symbolic>=0:math/p5-Math-Symbolic \
		p5-Math-Sequence>=0:math/p5-Math-Sequence

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
