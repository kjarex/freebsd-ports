PORTNAME=	commons-collections4
PORTVERSION=	4.4
CATEGORIES=	java devel
MASTER_SITES=	APACHE_COMMONS_BINARIES
MASTER_SITE_SUBDIR=	collections
PKGNAMEPREFIX=	apache-
DISTNAME=	${PORTNAME}-${PORTVERSION}-bin

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Classes that extend/augment the Java Collections Framework
WWW=		https://commons.apache.org/proper/commons-collections/

LICENSE=	APACHE20

USE_JAVA=	yes
JAVA_VERSION=	8+

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	${JAVAJARDIR}/${PORTNAME}.jar
PORTDOCS=	apidocs

OPTIONS_DEFINE=	DOCS

do-install:
	@${MKDIR} ${STAGEDIR}${JAVAJARDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}-${PORTVERSION}.jar \
		${STAGEDIR}${JAVAJARDIR}/${PORTNAME}.jar

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} apidocs ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
