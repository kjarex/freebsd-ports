PORTNAME=	wikicalc
DISTVERSION=	1-0
CATEGORIES=	www math
MASTER_SITES=	http://www.peapodcast.com/sgi/downloads/

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Open Source Wiki-Spreadsheet
WWW=		https://www.softwaregarden.com/products/wikicalc/index.html

RUN_DEPENDS=	p5-libwww>=0:www/p5-libwww

USES=		perl5 shebangfix
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}
SUB_FILES=	setup.sh
SHEBANG_FILES=	*.pl
perl_CMD=	${LOCALBASE}/bin/perl -I${DATADIR}

post-extract:
	@${RM} ${WRKSRC}/gpl.txt

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	cd ${WRKSRC} && \
	${FIND} . -type f -a ! -name \*.pl -a ! -name \*.bak | \
		${XARGS} -J % ${INSTALL_DATA} % ${STAGEDIR}${DATADIR}/$${i}; \
	${FIND} . -type f -a -name \*.pl | \
		${XARGS} -J % ${INSTALL_SCRIPT} % ${STAGEDIR}${DATADIR}/$${i}; \
	${INSTALL_SCRIPT} ${WRKDIR}/setup.sh ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
