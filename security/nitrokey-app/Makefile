PORTNAME=	nitrokey-app
DISTVERSIONPREFIX=	v
DISTVERSION=	1.4.2
CATEGORIES=	security

MAINTAINER=	monwarez@mailoo.org
COMMENT=	Nitrokey App is an application created to manage Nitrokey devices
WWW=		https://github.com/Nitrokey/nitrokey-app

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSES/GPLv3

LIB_DEPENDS=	libnitrokey.so:security/libnitrokey

USES=		cmake compiler:c++11-lang pkgconfig qt:5

USE_GITHUB=	yes
GH_ACCOUNT=	Nitrokey
GH_TUPLE=	Nitrokey:nitrokey-app:${DISTVERSIONPREFIX}${DISTVERSION}\
		tplgy:cppcodec:61d9b04:cppcodec

USE_QT=	buildtools:build concurrent gui linguisttools:build qmake:build svg widgets

post-extract:
	@${RMDIR} ${WRKSRC}/3rdparty/cppcodec
	@${LN} -sf ${WRKDIR}/cppcodec-61d9b04 ${WRKSRC}/3rdparty/cppcodec

.include <bsd.port.mk>
