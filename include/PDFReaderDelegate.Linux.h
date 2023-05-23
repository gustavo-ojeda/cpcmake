#if defined(__linux__)

#ifndef LINUX_PDF_READER_DELEGATE_H
#define LINUX_PDF_READER_DELEGATE_H

#include "PDFReaderDelegate.h"

class LinuxPDFReaderDelegate : public BasePDFReaderDelegate
{
    void openPDF(const std::string &filename) override;
    void closePDF() override;
};

#endif // LINUX_PDF_READER_DELEGATE_H

#endif
