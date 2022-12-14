PORTNAME=	swayr
DISTVERSIONPREFIX=	${PORTNAME}-
DISTVERSION=	0.21.0
CATEGORIES=	x11
MASTER_SITES=	https://git.sr.ht/~tsdh/${PORTNAME}/archive/${DISTVERSIONFULL}${EXTRACT_SUFX}?dummy=/
# XXX Teach USES=cargo to not override default DISTFILES
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Urgent-first/LRU window switcher for sway
WWW=		https://sr.ht/~tsdh/swayr/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC:H}/LICENSE

USES=		cargo
WRKSRC_SUBDIR=	${PORTNAME}
PLIST_FILES=	bin/${PORTNAME} \
		bin/${PORTNAME}d

CARGO_CRATES=	aho-corasick-0.7.18 \
		android_system_properties-0.1.4 \
		atty-0.2.14 \
		autocfg-1.1.0 \
		battery-0.7.8 \
		bitflags-1.3.2 \
		bumpalo-3.11.0 \
		cc-1.0.73 \
		cfg-if-1.0.0 \
		chrono-0.4.22 \
		clap-3.2.17 \
		clap_derive-3.2.17 \
		clap_lex-0.2.4 \
		core-foundation-0.7.0 \
		core-foundation-sys-0.7.0 \
		core-foundation-sys-0.8.3 \
		crossbeam-channel-0.5.6 \
		crossbeam-deque-0.8.2 \
		crossbeam-epoch-0.9.10 \
		crossbeam-utils-0.8.11 \
		directories-4.0.1 \
		dirs-sys-0.3.7 \
		either-1.8.0 \
		env_logger-0.9.0 \
		getrandom-0.2.7 \
		hashbrown-0.12.3 \
		heck-0.4.0 \
		hermit-abi-0.1.19 \
		humantime-2.1.0 \
		iana-time-zone-0.1.46 \
		indexmap-1.9.1 \
		itoa-1.0.3 \
		js-sys-0.3.59 \
		lazy_static-1.4.0 \
		lazycell-1.3.0 \
		libc-0.2.132 \
		log-0.4.17 \
		mach-0.3.2 \
		memchr-2.5.0 \
		memoffset-0.6.5 \
		nix-0.19.1 \
		ntapi-0.3.7 \
		num-integer-0.1.45 \
		num-traits-0.2.15 \
		num_cpus-1.13.1 \
		once_cell-1.13.1 \
		os_str_bytes-6.3.0 \
		peg-0.8.0 \
		peg-macros-0.8.0 \
		peg-runtime-0.8.0 \
		ppv-lite86-0.2.16 \
		proc-macro-error-1.0.4 \
		proc-macro-error-attr-1.0.4 \
		proc-macro2-1.0.43 \
		quote-1.0.21 \
		rand-0.8.5 \
		rand_chacha-0.3.1 \
		rand_core-0.6.3 \
		rayon-1.5.3 \
		rayon-core-1.9.3 \
		redox_syscall-0.2.16 \
		redox_users-0.4.3 \
		regex-1.6.0 \
		regex-syntax-0.6.27 \
		rt-format-0.3.1 \
		ryu-1.0.11 \
		scopeguard-1.1.0 \
		serde-1.0.144 \
		serde_derive-1.0.144 \
		serde_json-1.0.85 \
		strsim-0.10.0 \
		swaybar-types-3.0.0 \
		swayipc-3.0.1 \
		swayipc-types-1.1.2 \
		syn-1.0.99 \
		sysinfo-0.25.3 \
		termcolor-1.1.3 \
		textwrap-0.15.0 \
		thiserror-1.0.32 \
		thiserror-impl-1.0.32 \
		time-0.1.44 \
		toml-0.5.9 \
		typenum-1.15.0 \
		unicode-ident-1.0.3 \
		uom-0.30.0 \
		version_check-0.9.4 \
		wasi-0.10.0+wasi-snapshot-preview1 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.82 \
		wasm-bindgen-backend-0.2.82 \
		wasm-bindgen-macro-0.2.82 \
		wasm-bindgen-macro-support-0.2.82 \
		wasm-bindgen-shared-0.2.82 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.5 \
		winapi-x86_64-pc-windows-gnu-0.4.0

post-patch:
# Respect PREFIX for config and icons
	@${REINPLACE_CMD} -e 's,/usr/share,${DATADIR:H},' \
		-e 's,/etc,${PREFIX}&,' \
		${WRKSRC}/src/config.rs \
		${WRKSRC}/src/shared/cfg.rs \
		${WRKSRC}/src/util.rs

.include <bsd.port.mk>
