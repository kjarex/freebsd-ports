PORTNAME=	Algorithm-Bucketizer
PORTVERSION=	0.13
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Distribute sized items to buckets with limited size
WWW=		https://metacpan.org/release/Algorithm-Bucketizer

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Algorithm-Permute>=0:devel/p5-Algorithm-Permute \
		p5-Sysadm-Install>=0.23:sysutils/p5-Sysadm-Install

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
