PORTNAME=	eval
PORTVERSION=	113
PORTREVISION=	2
CATEGORIES=	math
MASTER_SITES=	ftp://wuarchive.wustl.edu/pub/aminet/util/cli/ \
		http://www.netsw.org/math/calc/ \
		http://main.aminet.net/util/cli/
DISTNAME=	Eval${PORTVERSION}
EXTRACT_SUFX=	.lha

MAINTAINER=	slaven@rezic.de
COMMENT=	Full featured floating point expression evaluator

USES=		lha readline

PLIST_FILES=	bin/Eval

WRKSRC=		${WRKDIR}/Eval/source

post-extract:
	-${LN} -s Makefile.unx ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/Eval ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
