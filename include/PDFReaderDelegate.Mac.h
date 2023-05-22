#ifndef MAC_PDF_READER_DELEGATE_H
#define MAC_PDF_READER_DELEGATE_H

#include "IPDFReaderDelegate.h"

class MacPDFReaderDelegate : public IPDFReaderDelegate
{
    void openPDF(const std::string &filename) override;
    void closePDF() override;
};

#endif // MAC_PDF_READER_DELEGATE_H
