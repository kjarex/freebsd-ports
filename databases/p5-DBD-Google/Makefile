PORTNAME=	DBD-Google
PORTVERSION=	0.51
PORTREVISION=	2
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Treat Google as a datasource for DBI
WWW=		https://metacpan.org/release/DBD-Google

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Net-Google>=0:net/p5-Net-Google \
		p5-URI>=0:net/p5-URI \
		p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-SQL-Statement>=0:databases/p5-SQL-Statement \
		p5-DBI>=0:databases/p5-DBI

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
