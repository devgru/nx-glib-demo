FROM devkitpro/toolchain-base as switch-base

MAINTAINER Dave Murphy <davem@devkitpro.org>

RUN dkp-pacman -Syyu --noconfirm switch-dev && \
    dkp-pacman -S --needed --noconfirm `dkp-pacman -Slq dkp-libs | grep '^switch-'` && \
    dkp-pacman -Scc --noconfirm


FROM switch-base as glib-base

RUN dpkg --add-architecture arm64
RUN apt update && apt install -y libglib2.0-dev:arm64 && rm -rf /var/lib/apt/lists/*