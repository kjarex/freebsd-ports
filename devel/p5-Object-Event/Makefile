PORTNAME=	Object-Event
PORTVERSION=	1.220
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/0$//}

MAINTAINER=	mons@cpan.org
COMMENT=	Class that provides an event callback interface
WWW=		https://metacpan.org/release/Object-Event

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-AnyEvent>=3.5:devel/p5-AnyEvent \
		p5-common-sense>=0:devel/p5-common-sense

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
