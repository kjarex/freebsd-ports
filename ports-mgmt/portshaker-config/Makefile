PORTNAME=	portshaker-config
PORTREVISION=	5
CATEGORIES=	ports-mgmt

MAINTAINER=	romain@FreeBSD.org
COMMENT=	Simple configuration manager for portshaker

BUILD_DEPENDS=	portshaker:ports-mgmt/portshaker
RUN_DEPENDS:=	${BUILD_DEPENDS}

MASTERDIR=	${.CURDIR}/../portshaker
BUILD_WRKSRC=	${WRKSRC}/examples
INSTALL_WRKSRC=	${BUILD_WRKSRC}
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

pre-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/portshaker.d

post-install:
	@${MV} ${STAGEDIR}${PREFIX}/etc/portshaker.conf \
		${STAGEDIR}${PREFIX}/etc/portshaker.conf.sample-config

.include "${MASTERDIR}/Makefile"
