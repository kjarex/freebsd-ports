PORTNAME=	ResourcePool-Resource-DBI
PORTVERSION=	1.0101
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN \
		http://www.fatalmind.com/projects/ResourcePool/
MASTER_SITE_SUBDIR=	CPAN:MWS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Resource pool wrapper for DBI Perl module
WWW=		https://metacpan.org/release/ResourcePool-Resource-DBI

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-ResourcePool>=0:devel/p5-ResourcePool \
		p5-DBI>=0:databases/p5-DBI

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
