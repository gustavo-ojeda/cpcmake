#ifndef I_PDF_READER_DELEGATE_H
#define I_PDF_READER_DELEGATE_H

#include <string>

// PDFReaderDelegate provides the interface for platform-specific implementations
struct IPDFReaderDelegate
{
    virtual void openPDF(const std::string &filename) = 0;
    virtual void closePDF() = 0;
    virtual ~IPDFReaderDelegate() = default;
};

#endif // I_PDF_READER_DELEGATE_H
