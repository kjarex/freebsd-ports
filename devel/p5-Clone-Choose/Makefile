PORTNAME=	Clone-Choose
PORTVERSION=	0.010
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Choose appropriate clone utility
WWW=		https://metacpan.org/release/Clone-Choose

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Test-Without-Module>=0:devel/p5-Test-Without-Module

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

OPTIONS_DEFINE=	CLONE CLONE_PP STORABLE
OPTIONS_DEFAULT=CLONE
CLONE_DESC=	Use Clone
CLONE_PP_DESC=	Use Clone::PP
STORABLE_DESC=	Use Storable

CLONE_BUILD_DEPENDS=	p5-Clone>=0.10:devel/p5-Clone
CLONE_RUN_DEPENDS=	p5-Clone>=0.10:devel/p5-Clone
CLONE_PP_BUILD_DEPENDS=	p5-Clone-PP>=0:devel/p5-Clone-PP
CLONE_PP_RUN_DEPENDS=	p5-Clone-PP>=0:devel/p5-Clone-PP

.include <bsd.port.mk>
