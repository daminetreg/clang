set(libclang_cmake_builddir "${CMAKE_BINARY_DIR}/lib/cmake/libclang-${LIBCLANG_LIBRARY_VERSION}")

configure_file (
    libclang-config.cmake.in
    ${libclang_cmake_builddir}/libclang-config.cmake
    @ONLY)

configure_file (
    libclang-config-version.cmake.in
    ${libclang_cmake_builddir}/libclang-config-version.cmake
    @ONLY)

install(FILES
    ${libclang_cmake_builddir}/libclang-config.cmake
    ${libclang_cmake_builddir}/libclang-config-version.cmake
    DESTINATION lib/cmake/libclang-${LIBCLANG_LIBRARY_VERSION})
