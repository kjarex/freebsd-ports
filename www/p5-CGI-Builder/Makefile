PORTNAME=	CGI-Builder
PORTVERSION=	1.36
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl module intended to make it easier to create reusable web apps
WWW=		https://metacpan.org/release/CGI-Builder

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IO-Util>=0:devel/p5-IO-Util \
		p5-OOTools>=0:devel/p5-OOTools

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
