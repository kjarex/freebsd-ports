PORTNAME=	teleport
DISTVERSIONPREFIX=	v
DISTVERSION=	4.3.9
PORTREVISION=	5
CATEGORIES=	security

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Gravitational Teleport SSH
WWW=		https://gravitational.com/teleport/

LICENSE=	APACHE20

NOT_FOR_ARCHS=	i386
NOT_FOR_ARCHS_REASON=	Uses 64bit types

BUILD_DEPENDS=	zip:archivers/zip

USES=		compiler gmake go

USE_GITHUB=		yes
GH_ACCOUNT=		gravitational
GH_TUPLE=		gravitational:webassets:eac734b:webassets/webassets
GH_COMMIT_SHORT=	fabee242d
GH_TAG_COMMIT=		${DISTVERSIONPREFIX}${DISTVERSION}-0-g${GH_COMMIT_SHORT}

USE_RC_SUBR=	teleport

# Extra assets are stored in the binary and must not be inadvertently removed
STRIP=
NOPRECIOUSMAKEVARS=	YES

SUB_FILES=	pkg-message

PLIST_FILES=	bin/tctl \
		bin/teleport \
		bin/tsh \
		"@sample etc/teleport.yaml.sample"

GO_TELEPORT_SRC_DIR=	src/github.com/gravitational/teleport
PRE_GOPATH_DIR=		${PORTNAME}-${DISTVERSION}${DISTVERSIONSUFFIX}

post-patch:
	@${MKDIR} ${WRKDIR}/${GO_TELEPORT_SRC_DIR}
	@${REINPLACE_CMD} -e 's|%%GH_TAG_COMMIT%%|${GH_TAG_COMMIT}|' \
		${WRKSRC}/version.mk
	@${CP} -rpH ${WRKDIR}/${PRE_GOPATH_DIR}/vendor/* ${WRKDIR}/src/
	@${CP} -rpH ${WRKDIR}/${PRE_GOPATH_DIR}/* ${WRKDIR}/${GO_TELEPORT_SRC_DIR}/

do-build:
	@cd ${WRKDIR}/${GO_TELEPORT_SRC_DIR} && \
		${SETENV} ${MAKE_ENV} ${BUILD_ENV} ${GO_ENV} \
		CGO_ENABLED=1 GOPATH=${WRKDIR} \
		${GMAKE} full

do-install:
	${WRKDIR}/${GO_TELEPORT_SRC_DIR}/build/teleport configure > ${STAGEDIR}${PREFIX}/etc/teleport.yaml.sample
	@${SED} -i '' \
		-e "s|nodename: .*|nodename: |g" \
		-e "s|cluster-join-token||g" \
		${STAGEDIR}${PREFIX}/etc/teleport.yaml.sample
	${INSTALL_PROGRAM} ${WRKDIR}/${GO_TELEPORT_SRC_DIR}/build/teleport ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKDIR}/${GO_TELEPORT_SRC_DIR}/build/tsh ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKDIR}/${GO_TELEPORT_SRC_DIR}/build/tctl ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.pre.mk>

# golang assumes that if clang is in use, it is called "clang" and not "cc". If
# it's called "cc", go fails.
.if ${COMPILER_TYPE} == clang
BUILD_ENV=	CC=clang
.endif

.include <bsd.port.post.mk>
