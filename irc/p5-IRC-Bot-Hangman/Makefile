PORTNAME=	IRC-Bot-Hangman
PORTVERSION=	0.1
PORTREVISION=	2
CATEGORIES=	irc games perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PDENIS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	IRC hangman bot
WWW=		https://metacpan.org/release/IRC-Bot-Hangman

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Bot-BasicBot>=0:irc/p5-Bot-BasicBot \
		p5-Games-GuessWord>=0:games/p5-Games-GuessWord \
		p5-Module-Find>=0:devel/p5-Module-Find \
		p5-Chatbot-Eliza>=0:misc/p5-Chatbot-Eliza \
		p5-Regexp-Common>=0:textproc/p5-Regexp-Common

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
