PORTNAME=	MR-Tarantool
PORTVERSION=	0.0.24
PORTREVISION=	2
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Driver for an efficient Tarantool/Box NoSQL in-memory storage
WWW=		https://metacpan.org/release/MR-Tarantool

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-AnyEvent>=0,1:devel/p5-AnyEvent \
		p5-Class-Singleton>=0:devel/p5-Class-Singleton \
		p5-List-MoreUtils>=0:lang/p5-List-MoreUtils \
		p5-MRO-Compat>=0:devel/p5-MRO-Compat \
		p5-Mouse>=0:devel/p5-Mouse \
		p5-String-CRC32>=0:devel/p5-String-CRC32

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
