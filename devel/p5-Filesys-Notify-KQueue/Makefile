PORTNAME=	Filesys-Notify-KQueue
PORTVERSION=	0.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to wrap IO::KQueue for watching file system
WWW=		https://metacpan.org/release/Filesys-Notify-KQueue

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-IO-KQueue>0:devel/p5-IO-KQueue
TEST_DEPENDS=	p5-Test-SharedFork>=0.19:devel/p5-Test-SharedFork

USES=		perl5
USE_PERL5=	modbuildtiny
NO_ARCH=	YES

.include <bsd.port.mk>
