PORTNAME=	Petal-CodePerl
PORTVERSION=	0.06
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:FDALY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Make Petal go faster by compiling the expressions
WWW=		https://metacpan.org/release/Petal-CodePerl

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Petal>=0:textproc/p5-Petal \
		p5-Parse-RecDescent>=0:devel/p5-Parse-RecDescent \
		p5-Code-Perl>=0:devel/p5-Code-Perl

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
