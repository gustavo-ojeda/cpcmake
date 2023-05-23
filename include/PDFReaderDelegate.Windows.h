#if defined(_WIN32)

#ifndef WINDOWS_PDF_READER_DELEGATE_H
#define WINDOWS_PDF_READER_DELEGATE_H

#include "PDFReaderDelegate.h"

class WindowsPDFReaderDelegate : public BasePDFReaderDelegate
{
    void openPDF(const std::string &filename) override;
    void closePDF() override;
};

#endif // WINDOWS_PDF_READER_DELEGATE_H

#endif