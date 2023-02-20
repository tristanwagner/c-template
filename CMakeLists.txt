cmake_minimum_required(VERSION 3.24)

# Definitions
set(PROJECT_NAME c-template)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

project(${PROJECT_NAME})
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

# TODO: add an example of static lib
# Find library sources
# file(GLOB_RECURSE LIB_SRC_FILES include/*/*.c)

# Build static/shared library
# add_library(${PROJECT_NAME}_LIB STATIC ${LIB_SRC_FILES})

# Install library
# install(TARGETS ${PROJECT_NAME}_LIB DESTINATION lib)

# Install library headers
file(GLOB_RECURSE LIB_INC_FILES include/*/*.h)
install(FILES ${LIB_INC_FILES} DESTINATION include)

set(SOURCE_FILES src/main.c)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# link libs if any
# target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}_LIB)

# Include paths
set(INCLUDE_DIRS ${INCLUDE_DIRS} ${PROJECT_SOURCE_DIR}/include)

# Assign the include directories
target_include_directories(${PROJECT_NAME} PRIVATE ${INCLUDE_DIRS})
