PKGNAMESUFFIX=		-queue-ram
PORTREVISION=		0

COMMENT=		RAM queue support for OpenSMTPD

PLIST_FILES=		libexec/opensmtpd/queue-ram

CONFIGURE_ARGS+=	--with-queue-ram

MASTERDIR=		${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=		yes

.include "${MASTERDIR}/Makefile"
