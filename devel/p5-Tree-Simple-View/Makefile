PORTNAME=	Tree-Simple-View
PORTVERSION=	0.20
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Set of classes for viewing Tree::Simple hierarchies
WWW=		https://metacpan.org/release/Tree-Simple-View

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE_ART10=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Throwable>=0.10:devel/p5-Class-Throwable \
		p5-Tree-Simple>=1.31:devel/p5-Tree-Simple
TEST_DEPENDS=	p5-Test-Exception>=0.15:devel/p5-Test-Exception \
		p5-Test-LongString>=0:devel/p5-Test-LongString

USES=		perl5 tar:tgz
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
