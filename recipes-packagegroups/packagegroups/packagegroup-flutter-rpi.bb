DESCRIPTION = "RaspberryPi Flutter Packagegroup"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

PACKAGE_ARCH = "${MACHINE_ARCH}"

inherit packagegroup

COMPATIBLE_MACHINE = "^rpi$"

OMXPLAYER  = "${@bb.utils.contains('MACHINE_FEATURES', 'vc4graphics', '', 'omxplayer', d)}"

RDEPENDS:${PN} = "\
    ${OMXPLAYER} \
    bcm2835-tests \
    \
    wpa-supplicant \
    avahi-daemon \
    kernel-modules \
    ntp ntp-tickadj \
    procps \
    \
    bluez5 \
    bluez5-noinst-tools \
    bluez5-obex \
    bluez5-testtools \
    bluealsa \
    \
    alsa-conf \
    alsa-lib \
    alsa-state \
    alsa-utils \
    alsa-utils-scripts \
    \
    gstreamer1.0 \
    gstreamer1.0-libav \
    gstreamer1.0-meta-base \
    gstreamer1.0-omx \
    gstreamer1.0-plugins-bad \
    gstreamer1.0-plugins-base \
    gstreamer1.0-plugins-base-alsa \
    gstreamer1.0-plugins-good \
    gstreamer1.0-plugins-ugly \
    x264 \
"

RRECOMMENDS:${PN} = "\
    ${@bb.utils.contains("BBFILE_COLLECTIONS", "meta-multimedia", "bigbuckbunny-1080p bigbuckbunny-480p bigbuckbunny-720p", "", d)} \
    ${MACHINE_EXTRA_RRECOMMENDS} \
"
