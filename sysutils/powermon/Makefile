PORTNAME=	powermon
PORTVERSION=	1.0.0
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	yamagi@yamagi.org
COMMENT=	Displays the CPUs current power consumption
WWW=		https://github.com/Yamagi/powermon

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=		amd64
ONLY_FOR_ARCHS_REASON=	specific to recent x86 processors

USE_GITHUB=	yes
GH_ACCOUNT=	yamagi

USES=		gmake ncurses

PLIST_FILES=	man/man8/powermon.8.gz sbin/powermon

post-patch:
	${REINPLACE_CMD} 's/-lcursesw/${NCURSESLIBS}/g' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/${PORTNAME}-${PORTVERSION}/release/powermon \
		${STAGEDIR}${PREFIX}/sbin/powermon
	${INSTALL_MAN} ${WRKDIR}/${PORTNAME}-${PORTVERSION}/misc/powermon.8 \
		${STAGEDIR}${MANPREFIX}/man/man8

.include <bsd.port.mk>
