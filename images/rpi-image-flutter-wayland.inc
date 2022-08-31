LICENSE = "MIT"

IMAGE_FEATURES += "splash package-management ssh-server-dropbear hwcodecs weston"

inherit core-image

require conf/include/flutter-runtime.inc

QB_MEM = "-m 512"

COMPATIBLE_MACHINE = "^rpi$"

IMAGE_INSTALL:append = "\
    \
    flutter-engine-${@gn_get_flutter_runtime_name(d)} \
    ivi-homescreen-${@gn_get_flutter_runtime_name(d)} \
    \
    flutter-app-igalia-homescreen-${@gn_get_flutter_runtime_name(d)} \
    flutter-app-pumped-fuel-ped-${@gn_get_flutter_runtime_name(d)} \
    \
    flutter-gallery-${@gn_get_flutter_runtime_name(d)} \
    flutter-test-secure-storage-${@gn_get_flutter_runtime_name(d)} \
    flutter-test-texture-egl-${@gn_get_flutter_runtime_name(d)} \
    flutter-test-video-player-${@gn_get_flutter_runtime_name(d)} \
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
