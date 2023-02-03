FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI += "\
    https://cdn.kernel.org/pub/linux/kernel/projects/rt/5.15/patches-5.15.86-rt56.tar.gz;name=rt_patch \
    file://rt.cfg \
"
SRC_URI[rt_patch.sha256sum] = "86c786b358f4fc8577eef57365afacecb2a567b9ce699e0d64496cf76fb458dd"
