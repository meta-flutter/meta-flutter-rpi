LICENSE = "MIT"

IMAGE_FEATURES += "splash package-management ssh-server-dropbear hwcodecs weston"

inherit core-image

QB_MEM = "-m 512"

COMPATIBLE_MACHINE = "^rpi$"

IMAGE_INSTALL:append = "\
    \
    flutter-engine-${FLUTTER_RUNTIME} \
    ivi-homescreen-${FLUTTER_RUNTIME} \
    \
    agl-flutter-igalia-homescreen-${FLUTTER_RUNTIME} \
    agl-flutter-pumped-fuel-ped-${FLUTTER_RUNTIME} \
    \
    flutter-gallery-${FLUTTER_RUNTIME} \
    flutter-test-plugins-${FLUTTER_RUNTIME} \
    flutter-test-secure-storage-${FLUTTER_RUNTIME} \
    flutter-test-texture-egl-${FLUTTER_RUNTIME} \
    flutter-test-video-player-${FLUTTER_RUNTIME} \
    \
    adwaita-icon-theme-cursors \
    geoclue \
    gsettings-desktop-schemas \
    liberation-fonts \    
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
    libgpiod-tools i2c-tools spidev-test can-utils \
    \
    ${CORE_IMAGE_BASE_INSTALL} \
    util-linux-agetty \
    packagegroup-core-full-cmdline \
    packagegroup-core-selinux \
    "

inherit selinux-image
