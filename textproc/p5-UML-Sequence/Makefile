PORTNAME=	UML-Sequence
PORTVERSION=	0.08
PORTREVISION=	4
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module that produce UML sequence diagrams
WWW=		https://metacpan.org/release/UML-Sequence

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-XML-DOM>=1.25:textproc/p5-XML-DOM \
		p5-GD>=2.30:graphics/p5-GD \
		p5-GD-TextUtil>=0.86:graphics/p5-GD-TextUtil

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
