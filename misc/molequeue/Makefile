PORTNAME=	molequeue
DISTVERSION=	0.9.0
PORTREVISION=	3
CATEGORIES=	misc
MASTER_SITES=	https://github.com/openchemistry/molequeue/releases/download/${DISTVERSION}/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Desktop integration of high performance computing resources
WWW=		https://www.openchemistry.org/projects/molequeue

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake compiler:c++11-lang qt:5
USE_QT=		core gui network widgets buildtools:build qmake:build
USE_LDCONFIG=	yes

post-install:
	@${RM} -r ${STAGEDIR}${PREFIX}/share/doc

.include <bsd.port.mk>
