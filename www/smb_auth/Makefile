PORTNAME=	smb_auth
PORTVERSION=	0.05
PORTREVISION=	10
CATEGORIES=	www
MASTER_SITES=	LOCAL/dinoex

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Proxy authentication module against an SMB server
WWW=		http://web.archive.org/web/20050320094310/http://www.hacom.nl/~richard/software/smb_auth.html

.if !defined(WITHOUT_REGISTER_SAMBA)
USES=		samba:run # smbclient
.endif

ALL_TARGET=	smb_auth

OPTIONS_DEFINE=	DOCS

do-install:
		${INSTALL_PROGRAM} ${WRKSRC}/smb_auth ${STAGEDIR}${PREFIX}/bin/
		${INSTALL_SCRIPT} ${WRKSRC}/smb_auth.sh ${STAGEDIR}${PREFIX}/bin/

do-install-DOCS-on:
		${MKDIR} ${STAGEDIR}${DOCSDIR}
		${INSTALL_DATA} ${FILESDIR}/README ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
