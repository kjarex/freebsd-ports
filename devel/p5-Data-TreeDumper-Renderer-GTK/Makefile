PORTNAME=	Data-TreeDumper-Renderer-GTK
PORTVERSION=	0.02
PORTREVISION=	6
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	GTK renderer for Data::TreeDumper
WWW=		https://metacpan.org/release/Data-TreeDumper-Renderer-GTK

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Data-TreeDumper>=0:devel/p5-Data-TreeDumper \
		p5-Gtk2>=0:x11-toolkits/p5-Gtk2

USES=		perl5 shebangfix
SHEBANG_FILES=	gtk_test.pl
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
