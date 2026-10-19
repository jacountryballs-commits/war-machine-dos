# Copyright 2026 Calculate Linux
# Distributed under the terms of the GNU General Public License v2

EAPI=8

DESCRIPTION="Un juego de terminal sobre invasiones de ovnis y hackeo gubernamental"
HOMEPAGE="https://localhost"

SRC_URI="attack-of-lumix-${PV}.tar.gz"

LICENSE="GPL-2"
SLOT="0"
KEYWORDS="~amd64 ~x86"

RDEPEND=""
DEPEND="${RDEPEND}"

src_compile() {
	emake
}

src_install() {
	emake DESTDIR="${D}" install
}
