PORTNAME=	mueller-dic
PORTVERSION=	1.2
PORTREVISION=	4
CATEGORIES=	russian
MASTER_SITES=	http://www.dindin.ru/download/ \
		http://mueller-dic.chat.ru/
DISTFILES=	Mueller7accentGPL.tgz yusupov_mf.tgz
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Mueller English-Russian dictionary
WWW=		http://mueller-dic.chat.ru/

USES=		gmake iconv:build
SUB_FILES=	mueller pkg-message

WRKSRC=		${WRKDIR}/mf
WRKSRC_DIC=	${WRKDIR}/usr/local/share/dict
WRKSRC_DOC=	${WRKDIR}/usr/local/share/mova

OPTIONS_DEFINE=	DOCS

post-build:
# convert dictionary to other charsets
	${MV} ${WRKSRC_DIC}/Mueller7accentGPL.koi ${WRKSRC_DIC}/Mueller7accentGPL.ru_RU.KOI8-R
	iconv -f koi8-r -t cp1251 -c ${WRKSRC_DIC}/Mueller7accentGPL.ru_RU.KOI8-R > \
			${WRKSRC_DIC}/Mueller7accentGPL.ru_RU.CP1251 || ${TRUE}
	iconv -f koi8-r -t utf-8 -c ${WRKSRC_DIC}/Mueller7accentGPL.ru_RU.KOI8-R > \
			${WRKSRC_DIC}/Mueller7accentGPL.ru_RU.UTF-8 || ${TRUE}
# rebuild dictionary hash
	${WRKSRC}/mf -d ${WRKSRC_DIC}/Mueller7accentGPL.ru_RU.KOI8-R -hash
	${WRKSRC}/mf -d ${WRKSRC_DIC}/Mueller7accentGPL.ru_RU.CP1251 -hash
	${WRKSRC}/mf -d ${WRKSRC_DIC}/Mueller7accentGPL.ru_RU.UTF-8 -hash

do-install:
	# install program with different name (it conflicts with teTeX)
	${INSTALL_PROGRAM} ${WRKSRC}/mf ${STAGEDIR}${PREFIX}/bin/muellerfind
	${INSTALL_SCRIPT} ${WRKDIR}/mueller ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC_DIC}/Mueller7accentGPL.ru_RU.* ${STAGEDIR}${DATADIR}/

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC_DOC}/Mueller7.txt ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
