PORTNAME=	pbnc
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	http://duncanthrax.net/pbnc/
DISTNAME=	pbnc

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Simple userspace TCP port bouncer
WWW=		http://freshmeat.net/projects/pbnc/

LICENSE=	BSDunclear
LICENSE_NAME=	Unclear BSD License
LICENSE_TEXT=	License of this software is declared as 'BSD' in pbnc.readme. \
		But it is not clear which versions of the BSD license (2, \
		3 or 4 clause) it is. No further file in the source archive \
		contains license information.
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

RUN_DEPENDS=	p5-Net-Netmask>=0:net-mgmt/p5-Net-Netmask

USES=		perl5
USE_PERL5=	run

NO_BUILD=	yes
NO_ARCH=	yes
PLIST_FILES=	etc/pbnc.cfg bin/pbnc.pl
PORTDOCS=	pbnc.readme

OPTIONS_DEFINE=	DOCS

pre-install:
	${REINPLACE_CMD} 's,^#!/usr/bin/perl,#!${PERL},' ${WRKSRC}/pbnc.pl

do-install:
	${INSTALL_DATA} ${WRKSRC}/pbnc.cfg ${STAGEDIR}${PREFIX}/etc/pbnc.cfg
	${INSTALL_SCRIPT} ${WRKSRC}/pbnc.pl ${STAGEDIR}${PREFIX}/bin/pbnc.pl

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
