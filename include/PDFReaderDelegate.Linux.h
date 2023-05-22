#ifndef LINUX_PDF_READER_DELEGATE_H
#define LINUX_PDF_READER_DELEGATE_H

#include "IPDFReaderDelegate.h"

class LinuxPDFReaderDelegate : public IPDFReaderDelegate
{
    void openPDF(const std::string &filename) override;
    void closePDF() override;
};

#endif // LINUX_PDF_READER_DELEGATE_H
