PORTNAME=	CGI-Framework
PORTVERSION=	0.23
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple-to-use, lightweight web CGI framework
WWW=		https://metacpan.org/release/CGI-Framework

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Template>=0:www/p5-HTML-Template \
		p5-CGI-Session>=0:www/p5-CGI-Session \
		p5-CGI>=0:www/p5-CGI

USES=		perl5
USE_PERL5=	configure

OPTIONS_DEFINE=	DOCS

PORTDOCS=	Changes README

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}
	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."

.include <bsd.port.mk>
