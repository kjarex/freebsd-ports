PORTNAME=	OpenCorsairLink
DISTVERSION=	g20191001
CATEGORIES=	sysutils

PATCH_SITES=	https://github.com/audiohacked/OpenCorsairLink/commit/
PATCHFILES=	d600c7ff032a3911d30b039844a31f0b3acfe26a.patch:-p1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Support for CorsairLink Devices
WWW=		https://github.com/audiohacked/OpenCorsairLink

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=	gmake pkgconfig

USE_GITHUB=	yes
GH_ACCOUNT=	audiohacked
GH_TAGNAME=	4234f4f

PLIST_FILES=	bin/${PORTNAME}

LDFLAGS+=	-lm

MAKE_ENV=	GIT_VERSION=${GH_TAGNAME}

post-stage:
	${MV} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}.elf ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
