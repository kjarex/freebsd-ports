PORTNAME=	Text-SimpleTable-AutoWidth
PORTVERSION=	0.09
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for ASCII tables auto-width selection
WWW=		https://metacpan.org/release/Text-SimpleTable-AutoWidth

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

RUN_DEPENDS=	\
	p5-Moo>0:devel/p5-Moo \
	p5-Text-SimpleTable>0:textproc/p5-Text-SimpleTable
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	YES

.include <bsd.port.mk>
