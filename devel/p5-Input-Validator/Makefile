PORTNAME=	Input-Validator
PORTVERSION=	0.001005
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:VTI
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Input validator that just validates input
WWW=		https://metacpan.org/pod/Input::Validator

LICENSE=	ART20

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Load>=0:devel/p5-Class-Load \
		p5-String-CamelCase>=0:textproc/p5-String-CamelCase

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
