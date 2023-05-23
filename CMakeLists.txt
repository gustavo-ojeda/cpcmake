project(PDFReaderExample)

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

# Add the PDFReaderExample executable
add_executable(PDFReaderExample main.cpp ${PLATFORM_SOURCE_FILES})

# Include the directory containing the header file
target_include_directories(PDFReaderExample PRIVATE ${COMMON_HEADER_FILES})

# Link platform-specific libraries if necessary
target_link_libraries(PDFReaderExample)



# Platform-specific libraries and settings if necessary
if(WIN32)
    # Add Windows configs
elseif(APPLE)
    # This little macro lets you set any XCode specific property
    macro (set_xcode_property TARGET XCODE_PROPERTY XCODE_VALUE)
    set_property (TARGET ${TARGET} PROPERTY XCODE_ATTRIBUTE_${XCODE_PROPERTY} ${XCODE_VALUE})
    endmacro (set_xcode_property)

    # Set signing capabilities for macOS
    SET_XCODE_PROPERTY(PDFReaderExample CODE_SIGN_IDENTITY $ENV{SPIRION_CODE_SIGN_IDENTITY})
    SET_XCODE_PROPERTY(PDFReaderExample DEVELOPMENT_TEAM $ENV{SPIRION_DEVELOPMENT_TEAM})
    SET_XCODE_PROPERTY(PDFReaderExample PRODUCT_BUNDLE_IDENTIFIER $ENV{SPIRION_PRODUCT_BUNDLE_IDENTIFIER})
    SET_XCODE_PROPERTY(PDFReaderExample CODE_SIGN_STYLE Manual)
else()
    # Add Linux configs
endif()