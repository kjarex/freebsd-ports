PORTNAME=	fastool
PORTVERSION=	0.1.4
CATEGORIES=	biology

MAINTAINER=	jwb@FreeBSD.org
COMMENT=	Simple and quick FastQ and FastA tool for file reading and conversion
WWW=		https://github.com/fstrozzi/Fastool

LICENSE=	BSD2CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	fstrozzi
GH_PROJECT=	Fastool

PLIST_FILES=	bin/fastool

CFLAGS+=	-std=c99

post-patch:
	${REINPLACE_CMD} \
		-e 's|CC *=|CC ?=|g' \
		-e 's|CFLAGS *=|CFLAGS ?=|g' \
		${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/fastool \
		${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
