PORTNAME=	Class-DBI-Pg
PORTVERSION=	0.09
PORTREVISION=	4
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN/Class/DMAKI
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extensions to Class::DBI for PostgreSQL
WWW=		https://metacpan.org/release/Class-DBI-Pg

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-DBI>=0:databases/p5-Class-DBI \
		p5-DBD-Pg>=0:databases/p5-DBD-Pg

USES=		perl5
USE_PERL5=	modbuild

OPTIONS_DEFINE=	DOCS

PORTDOCS=	Changes README

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
