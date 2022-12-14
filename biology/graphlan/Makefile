PORTNAME=	graphlan
DISTVERSION=	1.1.3
PORTREVISION=	1
CATEGORIES=	biology
MASTER_SITES=	https://bitbucket.org/${BB_ACCOUNT}/${BB_PROJECT}/get/${BB_COMMIT}${EXTRACT_SUFX}?dummy=/ \
		https://bitbucket.org/${BB_ACCOUNT}/pyphlan/get/eae40ebc0030${EXTRACT_SUFX}?dummy=/:pyphlan \
		https://bitbucket.org/CibioCM/export2graphlan/get/c168a100f37e${EXTRACT_SUFX}?dummy=/:e2g
DISTFILES=	${PORTNAME}-v${DISTVERSION}-${BB_COMMIT}${EXTRACT_SUFX} \
		pyphlan-eae40ebc0030${EXTRACT_SUFX}:pyphlan \
		export2graphlan-c168a100f37e${EXTRACT_SUFX}:e2g

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	High-quality circular representations of taxonomic, phylogenetic trees
WWW=		https://bitbucket.org/nsegata/graphlan/wiki/Home

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/license.txt

USES=		python shebangfix
SHEBANG_GLOB=	*.py

BB_ACCOUNT=	nsegata
BB_PROJECT=	graphlan
BB_COMMIT=	66ec7cfce81e

WRKSRC=	${WRKDIR}/${BB_ACCOUNT}-${BB_PROJECT}-${BB_COMMIT}

NO_BUILD=	yes
NO_ARCH=	yes

post-extract:
	@${CP} -r ${WRKDIR}/${BB_ACCOUNT}-pyphlan* ${WRKSRC}/pyphlan
	@${CP} -r ${WRKDIR}/CibioCM-export2graphlan* ${WRKSRC}/export2graphlan

do-install:
	${CP} -r ${WRKSRC} ${STAGEDIR}${DATADIR}
	@cd ${STAGEDIR}${DATADIR} && ${RM} -r examples export2graphlan/examples .hg* license.txt
.for e in ${PORTNAME} ${PORTNAME}_annotate
	@(echo "#!/bin/sh"; \
	  echo ""; \
	  echo ${DATADIR}/${e}.py \"$$\@\"; \
	) > ${STAGEDIR}${PREFIX}/bin/${e}
	@${CHMOD} +x ${STAGEDIR}${PREFIX}/bin/${e}
.endfor

.include <bsd.port.mk>
