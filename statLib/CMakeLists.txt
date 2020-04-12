cmake_minimum_required(VERSION 2.8) 
project(statLib)

SET(SOURCES statLib.c)

SET(COMMON_FLAGS -DDEBUG)

SET(COMMON_LIBS pthread)

add_library(statLib STATIC ${SOURCES})
     
target_compile_options(statLib PRIVATE -Werror)
target_compile_definitions(statLib PUBLIC ${COMMON_FLAGS})
target_link_libraries (statLib ${COMMON_LIBS})

#Install dnsproxy.
#install(TARGETS tutorial1 DESTINATION ${CMAKE_INSTALL_BINDIR})

