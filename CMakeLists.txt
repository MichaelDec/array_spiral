cmake_minimum_required(VERSION 3.5)

project(array_spyral LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(array_spyral main.cpp)

include(GNUInstallDirs)
install(TARGETS array_spyral
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
