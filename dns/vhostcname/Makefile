PORTNAME=	vhostcname
PORTVERSION=	2.00
CATEGORIES=	dns perl5
MASTER_SITES=	http://download.gnu.org.ua/pub/release/dnstools/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Synchronize DNS with server names and aliases from Apache vhost
WWW=		https://man.gnu.org.ua/manpage/?1+vhostcname

LICENSE=	GPLv3+

RUN_DEPENDS=	p5-Net-DNS>0:dns/p5-Net-DNS

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

PLIST_FILES=	bin/vhostcname ${SITE_MAN1}/vhostcname.1.gz

.include <bsd.port.mk>
