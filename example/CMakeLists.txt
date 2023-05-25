# Example section
add_executable(PDFReaderExample main.cpp)
target_link_libraries(PDFReaderExample PRIVATE PDFReaderLib)

# Platform-specific libraries and settings if necessary
if(WIN32)
    # Add Windows configs
    set(STARTUP_PROJECT_NAME PDFReaderExample)
endif()