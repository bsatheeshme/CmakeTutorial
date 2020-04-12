cmake_minimum_required(VERSION 2.8) 
project(tutorial1)

message("SYSTEM:" ${CMAKE_SYSTEM_NAME})
add_subdirectory(statLib)
add_subdirectory(dynLib)

SET(SOURCES main.c)

SET(CMAKE_INSTALL_BINDIR "~/cmkbin")
SET(CMAKE_INSTALL_LIBDIR "~/cmklib")
SET(CMAKE_INSTALL_INCLUDEDIR "~/cmkinc")

SET(COMMON_FLAGS -DDEBUG)

SET(COMMON_LIBS statLib dynLib)
OPTION(USE_JPG "Do you want to use jpg")
set(USE_JPG ON CACHE BOOL "include jpg file?")
add_executable(tutorial1 ${SOURCES})
include_directories(./include)
target_compile_options(tutorial1 PRIVATE -Werror)
target_compile_definitions(tutorial1 PUBLIC ${COMMON_FLAGS})
target_link_libraries (tutorial1 ${COMMON_LIBS})

include(CPack)

#Install dnsproxy.
#install(TARGETS tutorial1 DESTINATION ${CMAKE_INSTALL_BINDIR})
#install(FILES statLib.h dynLib.h DESTINATION ${CMAKE_INSTALL_BINDIR})
install(TARGETS tutorial1
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

