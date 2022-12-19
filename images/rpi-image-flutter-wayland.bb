LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/COPYING.MIT;md5=3da9cfbcb788c80a0384361b4de20420"

IMAGE_FEATURES += "splash package-management ssh-server-dropbear hwcodecs weston"

inherit core-image

QB_MEM = "-m 512"

COMPATIBLE_MACHINE = "^rpi$"

IMAGE_INSTALL:append = "\
    \
    adwaita-icon-theme-cursors \
    geoclue \
    gsettings-desktop-schemas \
    liberation-fonts \
    \
    libgpiod \
    libserialport \
    networkmanager \
    os-release \
    upower \
    wireless-regdb-static \
    xdg-user-dirs \
    xkeyboard-config \
    \
    packagegroup-flutter-rpi \
    \
    libgpiod-tools \
    i2c-tools \
    spidev-test \
    can-utils \
    \
    ${CORE_IMAGE_BASE_INSTALL} \
    util-linux-agetty \
    packagegroup-core-full-cmdline \
    "
