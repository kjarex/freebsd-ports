PORTNAME=	POEx-Role-SessionInstantiation
PORTVERSION=	1.102610
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:NPEREZ
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension of Moose role for turning objects into POE sessions
WWW=		https://metacpan.org/release/NPEREZ/POEx-Role-SessionInstantiation-1.102610

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-MooseX-CompileTime-Traits>=0:devel/p5-MooseX-CompileTime-Traits \
	p5-MooseX-Declare>0:devel/p5-MooseX-Declare \
	p5-MooseX-Types>0:devel/p5-MooseX-Types \
	p5-MooseX-Types>0:devel/p5-MooseX-Types \
	p5-POE>0:devel/p5-POE \
	p5-POEx-Types>=0:devel/p5-POEx-Types \
	p5-aliased>0:devel/p5-aliased

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
