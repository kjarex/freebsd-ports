PORTNAME=	blame
PORTVERSION=	1.3.1
CATEGORIES=	devel
MASTER_SITES=	ftp://ftp.invisible-island.net/rcs-blame/

MAINTAINER=	jhein@symmetricom.com
COMMENT=	Display last modification for each line in an RCS file
WWW=		https://invisible-island.net/rcs-blame/

USE_CSTD=	gnu89
GNU_CONFIGURE=	yes
PLIST_FILES=	bin/blame \
		man/man1/blame.1.gz

# Fix build with clang11
CFLAGS+=	-fcommon

.include <bsd.port.mk>
