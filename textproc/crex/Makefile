PORTNAME=	crex
DISTVERSION=	0.2.5
PORTREVISION=	2
CATEGORIES=	textproc

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Explore, test, and check regular expressions in the terminal
WWW=		https://octobanana.com/software/crex

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC:H}/LICENSE

USES=		compiler:c++14-lang
USE_CXXSTD=	c++14
USE_GITHUB=	yes
GH_ACCOUNT=	octobanana

MAKEFILE=	${FILESDIR}/Makefile
PLIST_FILES=	bin/crex
WRKSRC_SUBDIR=	src

.include <bsd.port.mk>
