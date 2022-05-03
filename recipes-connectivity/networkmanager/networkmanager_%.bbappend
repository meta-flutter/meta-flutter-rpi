FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " file://demo.nmconnection"

do_install:append () {
    install -d ${D}${sysconfdir}/NetworkManager/system-connections
    install -m 0600 ${WORKDIR}/demo.nmconnection ${D}${sysconfdir}/NetworkManager/system-connections
}