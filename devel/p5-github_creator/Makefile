PORTNAME=	github_creator
PORTVERSION=	0.15
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BDFOY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create a Github repository for your Perl module
WWW=		https://metacpan.org/release/BDFOY/github_creator-0.15

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Config-IniFiles>0:devel/p5-Config-IniFiles	\
		p5-File-Find-Closures>0:devel/p5-File-Find-Closures	\
		p5-Log-Log4perl>0:devel/p5-Log-Log4perl	\
		p5-WWW-Mechanize>0:www/p5-WWW-Mechanize	\
		p5-YAML>0:textproc/p5-YAML
TEST_DEPENDS=	p5-Test-Output>=0:devel/p5-Test-Output

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
