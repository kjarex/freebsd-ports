PORTNAME=	lafontaine
PORTVERSION=	0.4.1
PORTREVISION=	9
CATEGORIES=	lang
MASTER_SITES=	http://www.nongnu.org/lafontaine/archives/
DISTNAME=	${PORTNAME}_0.4-1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Graphical logo interpreter
WWW=		https://www.nongnu.org/lafontaine/en/eubaout.html

BROKEN_FreeBSD_13=	ld: error: duplicate symbol: my_turtle
BROKEN_FreeBSD_14=	ld: error: duplicate symbol: my_turtle

WRKSRC=		${WRKDIR}/${PORTNAME}-0.4

USES=		gmake gnome pathfix pkgconfig
USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
USE_CSTD=	gnu89
LDFLAGS+=	-lm

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext

.include <bsd.port.mk>
