PORTNAME=	postgrest
DISTVERSION=	9.0.1
CATEGORIES=	www databases haskell

MAINTAINER=	dmitry.wagin@ya.ru
COMMENT=	PostgREST create a REST API to an existing Postgres database
WWW=		https://postgrest.org

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	amd64 i386

BUILD_DEPENDS=	pg_config:databases/postgresql${PGSQL_DEFAULT}-client \
		ghc-8.10.7:lang/ghc810

USES=		cabal pgsql

USE_RC_SUBR=	postgrest

SKIP_CABAL_PLIST=	yes

POSTGREST_USER?=	postgrest
POSTGREST_GROUP?=	postgrest

SUB_FILES=	default.conf
SUB_LIST=	ETCDIR=${ETCDIR} \
		POSTGREST_GROUP=${POSTGREST_GROUP} \
		POSTGREST_USER=${POSTGREST_USER}

USERS=		${POSTGREST_USER}
GROUPS=		${POSTGREST_GROUP}

PLIST_FILES=	"@sample ${ETCDIR}/default.conf.sample" \
		sbin/postgrest

PLIST_SUB=	ETCDIR=${ETCDIR} \
		POSTGREST_GROUP=${POSTGREST_GROUP} \
		POSTGREST_USER=${POSTGREST_USER}

# This file includes the USE_CABAL. To regenerate it it's required to run:
# 1) make cabal-extract
# 2) make cabal-configure
# 3) make make-use-cabal && paste the USE_CABAL section to Makefile.modules
.include "Makefile.modules"

do-install:
	@${MKDIR} ${STAGEDIR}${ETCDIR}
	${INSTALL_DATA} ${WRKDIR}/default.conf ${STAGEDIR}${ETCDIR}/default.conf.sample
	${INSTALL_PROGRAM} \
		$$(find ${WRKSRC}/dist-newstyle -name ${PORTNAME} -type f -perm +111) \
		${STAGEDIR}${PREFIX}/sbin/${PORTNAME}

.include <bsd.port.mk>
