PORTNAME=	B-Deobfuscate
PORTVERSION=	0.20
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extension to B::Deparse for use in de-obfuscating source code
WWW=		https://metacpan.org/release/B-Deobfuscate

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-YAML>=0:textproc/p5-YAML \
		p5-B-Keywords>=0:devel/p5-B-Keywords

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
