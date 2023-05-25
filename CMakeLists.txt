cmake_minimum_required(VERSION 2.8)
project(PDFReaderLib)

if (CMAKE_VERSION VERSION_LESS "3.1")
    if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
      set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++1y")
    endif ()
else ()
    set(CMAKE_CXX_STANDARD 14)
endif ()

set(COMMON_HEADER_FILES include)

# Set platform-specific source files
if(WIN32)
    set(PLATFORM_SOURCE_FILES src/PDFReaderDelegate.Windows.cpp)
elseif(APPLE)
    set(CMAKE_OSX_ARCHITECTURES "x86_64;arm64")
    set(PLATFORM_SOURCE_FILES src/PDFReaderDelegate.Mac.cpp)
else()
    set(PLATFORM_SOURCE_FILES src/PDFReaderDelegate.Linux.cpp)
endif()

# Add the PDFReader Library
add_library(PDFReaderLib ${PLATFORM_SOURCE_FILES})

# Include the directory containing the header file
target_include_directories(PDFReaderLib PUBLIC ${COMMON_HEADER_FILES})


# Platform-specific libraries and settings if necessary
if(WIN32)
    # Add Windows configs
elseif(APPLE)
    # This little macro lets you set any XCode specific property
    macro (set_xcode_property TARGET XCODE_PROPERTY XCODE_VALUE)
    set_property (TARGET ${TARGET} PROPERTY XCODE_ATTRIBUTE_${XCODE_PROPERTY} ${XCODE_VALUE})
    endmacro (set_xcode_property)

    # Set signing capabilities for macOS
    SET_XCODE_PROPERTY(PDFReaderLib CODE_SIGN_IDENTITY "Developer ID Application")
    SET_XCODE_PROPERTY(PDFReaderLib DEVELOPMENT_TEAM "Team_ID")
    SET_XCODE_PROPERTY(PDFReaderLib PRODUCT_BUNDLE_IDENTIFIER "com.example")
    SET_XCODE_PROPERTY(PDFReaderLib CODE_SIGN_STYLE Manual)
else()
    # Add Linux configs
endif()

# Example section
add_subdirectory(example)

# Testing section
enable_testing()
add_subdirectory(tests)



