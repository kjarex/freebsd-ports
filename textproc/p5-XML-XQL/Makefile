PORTNAME=	XML-XQL
PORTVERSION=	0.68
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for querying XML tree structures with XQL
WWW=		https://metacpan.org/release/XML-XQL

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-XML-Parser>=0:textproc/p5-XML-Parser \
		p5-Date-Manip>=0:devel/p5-Date-Manip \
		p5-Parse-Yapp>=0:devel/p5-Parse-Yapp \
		p5-XML-DOM>=0:textproc/p5-XML-DOM

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
