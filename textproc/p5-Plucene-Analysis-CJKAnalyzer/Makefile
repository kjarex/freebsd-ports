PORTNAME=	Plucene-Analysis-CJKAnalyzer
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:XERN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Analyzer for CJK texts
WWW=		https://metacpan.org/release/XERN/Plucene-Analysis-CJKAnalyzer-0.02

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Plucene>=0:textproc/p5-Plucene
TEST_DEPENDS=	p5-YAML>=0:textproc/p5-YAML

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
