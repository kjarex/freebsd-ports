PORTNAME=	CatalystX-RoleApplicator
PORTVERSION=	0.005
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Apply roles to your Catalyst application-related classes
WWW=		https://metacpan.org/release/Catalyst-Plugin-Browser

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-MooseX-RelatedClassRoles>=0.003:devel/p5-MooseX-RelatedClassRoles \
		p5-Catalyst-Runtime>=5.7:www/p5-Catalyst-Runtime

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
