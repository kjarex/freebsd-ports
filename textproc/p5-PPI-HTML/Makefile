PORTNAME=	PPI-HTML
PORTVERSION=	1.08
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ADAMK
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate syntax-highlighted HTML for Perl using PPI
WWW=		https://metacpan.org/release/PPI-HTML

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-PPI>=0.990:textproc/p5-PPI \
		p5-CSS-Tiny>=0.10:textproc/p5-CSS-Tiny \
		p5-Params-Util>=0.05:devel/p5-Params-Util

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -i '' '/Test::More/d' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
