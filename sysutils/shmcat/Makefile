PORTNAME=	shmcat
PORTVERSION=	1.8
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	Simple tool that dumps System V shared memory segments
WWW=		https://sourceforge.net/projects/shmcat/

LICENSE=	GPLv2

USES=		tar:bzip2 iconv
GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=		gettext
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
