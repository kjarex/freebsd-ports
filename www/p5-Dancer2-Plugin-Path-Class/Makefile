PORTNAME=	Dancer2-Plugin-Path-Class
PORTVERSION=	0.08
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	List a directory using Path::Class
WWW=		https://metacpan.org/release/HVOERS/Dancer2-Plugin-Path-Class-0.08

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Path-Tiny>=0:devel/p5-Path-Tiny
BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Dancer2>=0.166000:www/p5-Dancer2 \
		p5-MIME-Types>=0:mail/p5-MIME-Types \
		p5-Path-Class>=0:devel/p5-Path-Class \
		p5-Format-Human-Bytes>=0:converters/p5-Format-Human-Bytes

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
