PORTNAME=	broot
DISTVERSIONPREFIX=	v
DISTVERSION=	1.14.2
PORTREVISION=	1
CATEGORIES=	misc

MAINTAINER=	lcook@FreeBSD.org
COMMENT=	Quick and easy new way to see and navigate directory trees
WWW=		https://dystroy.org/broot/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libgit2.so:devel/libgit2 \
		libonig.so:devel/oniguruma
RUN_DEPENDS=	git:devel/git

USES=		cargo
USE_GITHUB=	yes
GH_ACCOUNT=	canop

CARGO_CRATES=	adler-1.0.2 \
		adler32-1.2.0 \
		ahash-0.4.7 \
		ahash-0.7.6 \
		aho-corasick-0.7.18 \
		ansi_colours-1.1.1 \
		anyhow-1.0.58 \
		argh-0.1.8 \
		argh_derive-0.1.8 \
		argh_shared-0.1.8 \
		atty-0.2.14 \
		autocfg-1.1.0 \
		base64-0.13.0 \
		bet-1.0.1 \
		bincode-1.3.3 \
		bit_field-0.10.1 \
		bitflags-1.3.2 \
		bstr-0.2.17 \
		bumpalo-3.10.0 \
		bytemuck-1.10.0 \
		byteorder-1.4.3 \
		cc-1.0.73 \
		cfg-if-1.0.0 \
		char_reader-0.1.1 \
		chrono-0.4.19 \
		clap-3.2.8 \
		clap_complete-3.2.3 \
		clap_derive-3.2.7 \
		clap_lex-0.2.4 \
		cli-log-0.1.0 \
		cli-log-2.0.0 \
		clipboard-win-4.4.1 \
		color_quant-1.1.0 \
		coolor-0.5.0 \
		crc32fast-1.3.2 \
		crokey-0.4.1 \
		crokey-proc_macros-0.4.0 \
		crossbeam-0.8.1 \
		crossbeam-channel-0.5.5 \
		crossbeam-deque-0.8.1 \
		crossbeam-epoch-0.9.9 \
		crossbeam-queue-0.3.5 \
		crossbeam-utils-0.8.10 \
		crossterm-0.23.2 \
		crossterm_winapi-0.9.0 \
		csv-1.1.6 \
		csv-core-0.1.10 \
		csv2svg-0.1.7 \
		custom_error-1.9.2 \
		deflate-1.0.0 \
		deser-hjson-1.0.2 \
		directories-4.0.1 \
		directories-next-2.0.0 \
		dirs-sys-0.3.7 \
		dirs-sys-next-0.1.2 \
		doc-comment-0.3.3 \
		either-1.7.0 \
		error-code-2.3.1 \
		exr-1.4.2 \
		fallible-iterator-0.2.0 \
		fallible-streaming-iterator-0.1.9 \
		fastrand-1.7.0 \
		file-size-1.0.3 \
		flate2-1.0.24 \
		flume-0.10.13 \
		fnv-1.0.7 \
		form_urlencoded-1.0.1 \
		futures-core-0.3.21 \
		futures-sink-0.3.21 \
		getrandom-0.2.7 \
		gif-0.11.4 \
		git2-0.14.4 \
		glassbench-0.3.3 \
		glob-0.3.0 \
		half-1.8.2 \
		hashbrown-0.9.1 \
		hashbrown-0.12.1 \
		hashlink-0.6.0 \
		heck-0.3.3 \
		heck-0.4.0 \
		hermit-abi-0.1.19 \
		id-arena-2.2.1 \
		idna-0.2.3 \
		image-0.24.2 \
		include_dir-0.7.2 \
		include_dir_macros-0.7.2 \
		indexmap-1.9.1 \
		inflate-0.4.5 \
		instant-0.1.12 \
		is_executable-1.0.1 \
		itoa-0.4.8 \
		itoa-1.0.2 \
		jobserver-0.1.24 \
		jpeg-decoder-0.2.6 \
		js-sys-0.3.58 \
		lazy-regex-2.3.0 \
		lazy-regex-proc_macros-2.3.0 \
		lazy_static-1.4.0 \
		lebe-0.5.1 \
		lfs-core-0.11.0 \
		libc-0.2.126 \
		libgit2-sys-0.13.4+1.4.2 \
		libsqlite3-sys-0.20.1 \
		libz-sys-1.1.8 \
		line-wrap-0.1.1 \
		linked-hash-map-0.5.6 \
		lock_api-0.4.7 \
		log-0.4.17 \
		matches-0.1.9 \
		memchr-2.5.0 \
		memmap-0.7.0 \
		memoffset-0.6.5 \
		minimad-0.9.0 \
		miniz_oxide-0.5.3 \
		mio-0.8.4 \
		nanorand-0.7.0 \
		nix-0.22.3 \
		num-integer-0.1.45 \
		num-iter-0.1.43 \
		num-rational-0.4.1 \
		num-traits-0.2.15 \
		num_cpus-1.13.1 \
		num_threads-0.1.6 \
		once_cell-1.13.0 \
		onig-6.3.2 \
		onig_sys-69.8.0 \
		open-1.7.1 \
		opener-0.5.0 \
		os_str_bytes-6.1.0 \
		parking_lot-0.12.1 \
		parking_lot_core-0.9.3 \
		pathdiff-0.2.1 \
		percent-encoding-2.1.0 \
		phf-0.10.1 \
		phf_generator-0.10.0 \
		phf_macros-0.10.0 \
		phf_shared-0.10.0 \
		pin-project-1.0.11 \
		pin-project-internal-1.0.11 \
		pkg-config-0.3.25 \
		plist-1.3.1 \
		png-0.17.5 \
		ppv-lite86-0.2.16 \
		proc-macro-error-1.0.4 \
		proc-macro-error-attr-1.0.4 \
		proc-macro-hack-0.5.19 \
		proc-macro2-1.0.40 \
		proc-status-0.1.1 \
		quick-xml-0.22.0 \
		quote-1.0.20 \
		rand-0.8.5 \
		rand_chacha-0.3.1 \
		rand_core-0.6.3 \
		rayon-1.5.3 \
		rayon-core-1.9.3 \
		redox_syscall-0.2.13 \
		redox_users-0.4.3 \
		regex-1.5.6 \
		regex-automata-0.1.10 \
		regex-syntax-0.6.26 \
		remove_dir_all-0.5.3 \
		rgb-0.8.33 \
		rusqlite-0.24.2 \
		ryu-1.0.10 \
		safemem-0.3.3 \
		same-file-1.0.6 \
		scoped_threadpool-0.1.9 \
		scopeguard-1.1.0 \
		secular-1.0.1 \
		serde-1.0.138 \
		serde_derive-1.0.138 \
		serde_json-1.0.82 \
		signal-hook-0.3.14 \
		signal-hook-mio-0.2.3 \
		signal-hook-registry-1.4.0 \
		siphasher-0.3.10 \
		smallvec-1.9.0 \
		snafu-0.7.1 \
		snafu-derive-0.7.1 \
		spin-0.9.3 \
		splitty-0.1.0 \
		str-buf-1.0.6 \
		strict-0.1.4 \
		strsim-0.10.0 \
		svg-0.8.2 \
		syn-1.0.98 \
		syntect-no-panic-4.6.1 \
		tempfile-3.3.0 \
		termcolor-1.1.3 \
		termimad-0.20.2 \
		terminal-clipboard-0.3.1 \
		terminal-light-1.0.0 \
		termux-clipboard-0.1.0 \
		textwrap-0.15.0 \
		thiserror-1.0.31 \
		thiserror-impl-1.0.31 \
		threadpool-1.8.1 \
		tiff-0.7.2 \
		time-0.1.44 \
		time-0.3.11 \
		tinyvec-1.6.0 \
		tinyvec_macros-0.1.0 \
		toml-0.5.9 \
		umask-2.0.0 \
		unicode-bidi-0.3.8 \
		unicode-ident-1.0.1 \
		unicode-normalization-0.1.21 \
		unicode-segmentation-1.9.0 \
		unicode-width-0.1.9 \
		url-2.2.2 \
		users-0.11.0 \
		vcpkg-0.2.15 \
		version_check-0.9.4 \
		walkdir-2.3.2 \
		wasi-0.10.0+wasi-snapshot-preview1 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.81 \
		wasm-bindgen-backend-0.2.81 \
		wasm-bindgen-macro-0.2.81 \
		wasm-bindgen-macro-support-0.2.81 \
		wasm-bindgen-shared-0.2.81 \
		weezl-0.1.6 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.5 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-sys-0.36.1 \
		windows_aarch64_msvc-0.36.1 \
		windows_i686_gnu-0.36.1 \
		windows_i686_msvc-0.36.1 \
		windows_x86_64_gnu-0.36.1 \
		windows_x86_64_msvc-0.36.1 \
		x11-clipboard-0.5.3 \
		xcb-0.10.1 \
		xml-rs-0.8.4 \
		xterm-query-0.1.0 \
		xterm-query-0.2.0 \
		yaml-rust-0.4.5
CARGO_FEATURES=	--no-default-features

SUB_FILES=	pkg-message
PLIST_FILES=	bin/${PORTNAME} \
		man/man1/${PORTNAME}.1.gz
PORTDOCS=	CHANGELOG.md README.md documentation.md features.md

OPTIONS_DEFINE=		CLIPBOARD DOCS
OPTIONS_DEFAULT=	CLIPBOARD

CLIPBOARD_DESC=	Enable terminal X11 clipboard support

CLIPBOARD_USES=		python:3.6+,build xorg
CLIPBOARD_USE=		XORG=xcb
CLIPBOARD_BINARY_ALIAS=	python3=${PYTHON_CMD}
CLIPBOARD_VARS=		CARGO_FEATURES+=clipboard

_BUILD_VERSION=	${DISTVERSION}
_BUILD_DATE=	$$(date +'%Y/%m/%d')

pre-build:
	@${MV} ${WRKSRC}/man/page \
		${WRKSRC}/man/${PORTNAME}.1
	@${REINPLACE_CMD} -e 's|#version|${_BUILD_VERSION}|g' \
		-e "s|#date|${_BUILD_DATE}|g" \
		${WRKSRC}/man/${PORTNAME}.1

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	${INSTALL_MAN} ${WRKSRC}/man/${PORTNAME}.1 \
		${STAGEDIR}${MAN1PREFIX}/man/man1

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} \
		${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
