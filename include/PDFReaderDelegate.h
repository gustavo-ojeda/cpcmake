#ifndef PDF_READER_DELEGATE_H
#define PDF_READER_DELEGATE_H

#include <iostream>
#include "IPDFReaderDelegate.h"

// PDFReaderDelegate provides the interface for platform-specific implementations
class BasePDFReaderDelegate : public IPDFReaderDelegate
{
protected:
    BasePDFReaderDelegate()
    {
        std::cout << "Common implementation constructor" << std::endl;
    }
};

#endif // PDF_READER_DELEGATE_H
