PORTNAME=	DBIx-Class-QueryProfiler
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DBIx::Class profiler
WWW=		https://metacpan.org/release/DBIx-Class-QueryProfiler

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Module-Install>=0:devel/p5-Module-Install \
		p5-DBIx-Class>=0:databases/p5-DBIx-Class
RUN_DEPENDS=	p5-DBIx-Class>=0:databases/p5-DBIx-Class
TEST_DEPENDS=	p5-Test-Perl-Critic>=0:textproc/p5-Test-Perl-Critic

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
