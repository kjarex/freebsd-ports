PORTNAME=	RTF-Parser
PORTVERSION=	1.12
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for parsing RTF files

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-RTF-Tokenizer>=1.16:textproc/p5-RTF-Tokenizer

CONFLICTS_INSTALL=	rtf2html

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
