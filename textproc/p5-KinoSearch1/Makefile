PORTNAME=	KinoSearch1
PORTVERSION=	1.01
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:CREAMYG
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl search engine library
WWW=		https://metacpan.org/release/KinoSearch1

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Lingua-StopWords>=0.02:textproc/p5-Lingua-StopWords \
		p5-Lingua-Stem-Snowball>=0.94:textproc/p5-Lingua-Stem-Snowball \
		p5-Clone>=0.18:devel/p5-Clone

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
