PORTNAME=	POE-Component-DirWatch
PORTVERSION=	0.300004
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE directory watcher
WWW=		https://metacpan.org/release/POE-Component-DirWatch

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-POE>=0.12:devel/p5-POE \
		p5-Path-Class>0:devel/p5-Path-Class \
		p5-MooseX-Types-Path-Class>0:devel/p5-MooseX-Types-Path-Class \
		p5-File-Signature>0:sysutils/p5-File-Signature

USES=		perl5
USE_PERL5=	configure
INSTALL_TARGET=	pure_install
NO_ARCH=	yes

.include <bsd.port.mk>
