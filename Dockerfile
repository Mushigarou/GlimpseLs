FROM alpine:3.23.3

RUN apk update && apk add --no-cache \
	bash \
	binutils \
	build-base \
	coreutils \
	gdb \
	git \
	linux-headers \
	man-pages \
	musl-dev \
	strace \
	valgrind

WORKDIR /workspace

CMD ["bash"]