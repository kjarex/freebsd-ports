PORTNAME=	Catalyst-View-XML-Simple
PORTVERSION=	0.01
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	LOCAL/kuriyama
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for Catalyst XML View Class
WWW=		http://catalyst.g.hatena.ne.jp/ikasam_a/20071202/1196581882 # Japanese

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

RUN_DEPENDS=	\
	p5-Catalyst-Runtime>0:www/p5-Catalyst-Runtime \
	p5-XML-Simple>0:textproc/p5-XML-Simple
BUILD_DEPENDS=	\
	p5-File-Remove>0:devel/p5-File-Remove \
	p5-Module-Install>0:devel/p5-Module-Install \
	p5-Module-Install-TestBase>0:devel/p5-Module-Install-TestBase \
	p5-Catalyst-Runtime>0:www/p5-Catalyst-Runtime \
	p5-XML-Simple>0:textproc/p5-XML-Simple

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
