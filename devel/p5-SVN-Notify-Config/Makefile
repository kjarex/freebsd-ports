PORTNAME=	SVN-Notify-Config
PORTVERSION=	0.0911
PORTREVISION=	4
PORTEPOCH=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl module for config-driven Subversion notification
WWW=		https://metacpan.org/release/SVN-Notify-Config

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	${LOCALBASE}/bin/svnlook:devel/subversion \
		p5-SVN-Notify>=2.70:devel/p5-SVN-Notify \
		p5-YAML>=0.62:textproc/p5-YAML
TEST_DEPENDS=	p5-Test-Deep>=0.1:devel/p5-Test-Deep

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
