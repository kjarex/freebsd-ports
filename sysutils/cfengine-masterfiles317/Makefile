PORTNAME=	cfengine-masterfiles
PORTVERSION=	3.17.0
CATEGORIES=	sysutils
MASTER_SITES=	https://cfengine-package-repos.s3.amazonaws.com/tarballs/

MAINTAINER=	cy@FreeBSD.org
COMMENT=	cfengine sample policies for installations and upgrades
WWW=		https://cfengine.com/

LICENSE=	GPLv3

CPE_VENDOR=	gnu
CPE_PRODUCT=	cfengine

DEPRECATED=		Expire one year after cfengine-masterfiles 3.19.0 released
EXPIRATION_DATE=	2022-12-10

CONFLICTS=	cfengine-masterfiles3[0-9] cfengine-masterfiles31[0-689]
.if !defined(MASTERDIR)
PKGNAMESUFFIX=	317
CONFLICTS+=	cfengine-masterfiles-3.*
.endif

RUN_DEPENDS=	cf-agent:sysutils/cfengine${PKGNAMESUFFIX}

FETCH_BEFORE_ARGS=	-o ${DISTDIR}/${DISTFILES}

MAKE_JOBS_UNSAFE=	yes
USES=		cpe gmake python:build shebangfix
HAS_CONFIGURE=	yes
EXAMPLESDIR=	${PREFIX}/share/examples/cfengine-masterfiles
CONFIGURE_ARGS=	--prefix=${EXAMPLESDIR}
SHEBANG_FILES=	modules/packages/yum  modules/packages/zypper

.include <bsd.port.mk>
