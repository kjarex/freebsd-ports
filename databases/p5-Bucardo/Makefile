PORTNAME=	Bucardo
PORTVERSION=	5.6.0
CATEGORIES=	databases perl5
MASTER_SITES=	https://bucardo.org/downloads/ \
		LOCAL/mat/${PORTNAME}
PKGNAMEPREFIX=	p5-

MAINTAINER=	mat@FreeBSD.org
COMMENT=	Asynchronous PostgreSQL replication system
WWW=		https://bucardo.org/Bucardo/

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-boolean>=0:devel/p5-boolean \
		p5-DBD-Pg>=2.0:databases/p5-DBD-Pg \
		p5-DBI>=1.51:databases/p5-DBI \
		p5-DBIx-Safe>=1.2.4:databases/p5-DBIx-Safe \
		p5-Encode-Locale>=0:converters/p5-Encode-Locale

USES=		perl5
USE_PERL5=	configure
USE_RC_SUBR=	bucardo

post-patch:
	@${REINPLACE_CMD} 's/INSTALL_BASE/DESTDIR/;s/bucardo.1pm/bucardo.1/' \
		${WRKSRC}/Makefile.PL
	@${REINPLACE_CMD} 's=/usr/local=${PREFIX}=' ${WRKSRC}/Makefile.PL \
		${WRKSRC}/bucardo

post-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/scripts/* ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
