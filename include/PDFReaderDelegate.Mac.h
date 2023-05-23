#if defined(__APPLE__)

#ifndef LINUX_PDF_READER_DELEGATE_H
#define LINUX_PDF_READER_DELEGATE_H

#include "PDFReaderDelegate.h"

class MacPDFReaderDelegate : public BasePDFReaderDelegate
{
    void openPDF(const std::string &filename) override;
    void closePDF() override;
};

#endif // MacPDFReaderDelegate

#endif
