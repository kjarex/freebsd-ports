PORTNAME=	jdk
PORTVERSION=	${JDK_VERSION}.${JDK_UPDATE_VERSION}.${JDK_PATCH_VERSION}
CATEGORIES=	java devel
MASTER_SITES=	#
PKGNAMESUFFIX=	${JDK_VERSION}-doc
DISTNAME=	jdk-${PORTVERSION}_doc-all

MAINTAINER=	java@FreeBSD.org
COMMENT=	Java Development Kit ${JDK_VERSION} Documentation
WWW=		https://www.oracle.com/java/

# Converted from RESTRICTED
LICENSE=	jdk
LICENSE_NAME=	jdk
LICENSE_TEXT=	This documentation is under license and export control.
LICENSE_PERMS=	auto-accept

USES=		zip

DOCSDIR?=	${PREFIX}/share/doc/jdk${JDK_VERSION}

WRKSRC=		${WRKDIR}/docs
JDK_VERSION=		11
JDK_UPDATE_VERSION=	0
JDK_PATCH_VERSION=	5
DOWNLOAD_URL=	http://www.oracle.com/technetwork/java/javase/downloads/index.html

NO_BUILD=	yes
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

.include <bsd.port.pre.mk>

.if !exists(${DISTDIR}/${DISTNAME}${EXTRACT_SUFX})
IGNORE=You must manually fetch ${DISTNAME}${EXTRACT_SUFX} from ${DOWNLOAD_URL} by selecting the "Download" link for the "Java SE 11 Documentation", place it in ${DISTDIR} and then run make again
.endif

do-install:
	@${ECHO} -n ">> Installing documentation in ${DOCSDIR}..."
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@(cd ${WRKSRC}/ && ${COPYTREE_SHARE} \* ${STAGEDIR}${DOCSDIR}/)
	@${ECHO} " [ DONE ]"

.include <bsd.port.post.mk>
