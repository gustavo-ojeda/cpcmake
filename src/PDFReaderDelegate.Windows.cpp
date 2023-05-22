#include <iostream>
#include "PDFReaderDelegate.Windows.h"

void WindowsPDFReaderDelegate::openPDF(const std::string &filename)
{
    std::cout << "Windows PDF reader opening: " << filename << std::endl;
    // Windows-specific PDF reader opening code
}

void WindowsPDFReaderDelegate::closePDF()
{
    std::cout << "Windows PDF reader closing" << std::endl;
    // Windows-specific PDF reader closing code
}
