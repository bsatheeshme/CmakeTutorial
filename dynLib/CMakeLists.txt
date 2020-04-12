cmake_minimum_required(VERSION 2.8) 
project(dynLib)

SET(SOURCES dynLib.c)

SET(COMMON_FLAGS -DDEBUG)

SET(COMMON_LIBS pthread)

add_library(dynLib SHARED ${SOURCES})
     
target_compile_options(dynLib PRIVATE -Werror)
target_compile_definitions(dynLib PUBLIC ${COMMON_FLAGS})
target_link_libraries (dynLib ${COMMON_LIBS})
set_target_properties(dynLib PROPERTIES VERSION 1.2
                                          SOVERSION 4)
#Install dnsproxy.
#install(TARGETS tutorial1 DESTINATION ${CMAKE_INSTALL_BINDIR})

