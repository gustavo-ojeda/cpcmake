#if defined(__linux__)

#include <iostream>
#include "PDFReaderDelegate.Linux.h"

void LinuxPDFReaderDelegate::openPDF(const std::string &filename)
{
    std::cout << "Linux PDF reader opening: " << filename << std::endl;
    // Linux-specific PDF reader opening code
}

void LinuxPDFReaderDelegate::closePDF()
{
    std::cout << "Linux PDF reader closing" << std::endl;
    // Linux-specific PDF reader closing code
}

#endif
