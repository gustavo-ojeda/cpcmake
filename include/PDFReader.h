#ifndef PDF_READER_H
#define PDF_READER_H

#include <memory>
#include "IPDFReaderDelegate.h"

// PDFReader is the cross-platform PDF Reader class using the template method pattern
template <typename Delegate>
class PDFReader
{
public:
    PDFReader()
        : _delegate(std::unique_ptr<IPDFReaderDelegate>(new Delegate()))
    {
    }

    void readPDF(const std::string &filename)
    {
        _delegate->openPDF(filename);
        _delegate->closePDF();
    }

private:
    std::unique_ptr<IPDFReaderDelegate> _delegate;
};

#endif