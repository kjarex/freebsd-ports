PORTNAME=	Pod-Abstract
PORTVERSION=	0.20
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Abstract document tree for Perl POD documents
WWW=		https://metacpan.org/release/Pod-Abstract

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IO-String>=0:devel/p5-IO-String \
		p5-Task-Weaken>=0:devel/p5-Task-Weaken

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
