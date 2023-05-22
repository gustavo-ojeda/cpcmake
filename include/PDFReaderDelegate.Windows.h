#ifndef WINDOWS_PDF_READER_DELEGATE_H
#define WINDOWS_PDF_READER_DELEGATE_H

#include "IPDFReaderDelegate.h"

class WindowsPDFReaderDelegate : public IPDFReaderDelegate
{
    void openPDF(const std::string &filename) override;
    void closePDF() override;
};

#endif // WINDOWS_PDF_READER_DELEGATE_H
