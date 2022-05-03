
# Base this image on core-image-base
include recipes-core/images/core-image-base.bb

COMPATIBLE_MACHINE = "^rpi$"

IMAGE_INSTALL:append = "\
    \
    flutter-engine-${FLUTTER_RUNTIME} \
    ivi-homescreen-${FLUTTER_RUNTIME} \
    flutter-gallery-${FLUTTER_RUNTIME} \
    flutter-linux-plugins-${FLUTTER_RUNTIME} \
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
    "
