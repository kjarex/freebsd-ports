PORTNAME=	HTML-Template-Pro
PORTVERSION=	0.9524
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to use HTML Templates from CGI scripts
WWW=		https://metacpan.org/release/HTML-Template-Pro

LICENSE=	ART10 GPLv1+ LGPL21+
LICENSE_COMB=	dual
LICENSE_FILE_ART10=	${WRKSRC}/ARTISTIC
LICENSE_FILE_LGPL21+ =	${WRKSRC}/LGPL

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-JSON>=2.0:converters/p5-JSON

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/HTML/Template/Pro/Pro.so

.include <bsd.port.mk>
