PORTNAME=	SQLite-Work
PORTVERSION=	0.16.01
PORTREVISION=	1
CATEGORIES=	databases www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RUBYKAT
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Report on and update an SQLite database
WWW=		https://metacpan.org/release/SQLite-Work

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DBD-SQLite>=0:databases/p5-DBD-SQLite \
		p5-DBI>=0:databases/p5-DBI \
		p5-Getopt-ArgvFile>=0:devel/p5-Getopt-ArgvFile \
		p5-Text-NeatTemplate>=0:textproc/p5-Text-NeatTemplate

PORTSCOUT=	skipv:0.0202,0.0501,0.1001,0.1002,0.1003

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
