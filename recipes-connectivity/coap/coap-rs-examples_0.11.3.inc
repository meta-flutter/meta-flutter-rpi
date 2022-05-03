CARGO_BUILD_FLAGS += "--examples"

cargo_do_install:append() {

    rm ${D}${bindir}/client-*
    rm ${D}${bindir}/server-*
    rm ${D}${bindir}/client_and_server-*
}