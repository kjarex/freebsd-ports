PORTNAME=	brise
PORTVERSION=	0.35
PORTREVISION=	1
DISTVERSIONPREFIX=	${PORTNAME}-
CATEGORIES=	chinese textproc

MAINTAINER=	hiroto.kagotani@gmail.com
COMMENT=	Rime Schema Repository
WWW=		https://rime.github.io/

LICENSE=	GPLv3

BROKEN=		fails to build

BUILD_DEPENDS=	rime_deployer:chinese/librime

USES=		gmake
USE_GITHUB=	yes
GH_ACCOUNT=	rime

MAKE_ARGS+=	RIME_DATA_DIR=${DATADIR}

.include <bsd.port.mk>
