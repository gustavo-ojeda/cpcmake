#if defined(__APPLE__)

#include <iostream>
#include "PDFReaderDelegate.Mac.h"

void MacPDFReaderDelegate::openPDF(const std::string &filename)
{
    std::cout << "Mac PDF reader opening: " << filename << std::endl;
    // Mac-specific PDF reader opening code
}

void MacPDFReaderDelegate::closePDF()
{
    std::cout << "Mac PDF reader closing" << std::endl;
    // Mac-specific PDF reader closing code
}

#endif