#ifndef PDF_READER_H
#define PDF_READER_H

#include <iostream>
#include "IPDFReaderDelegate.h"

// PDFReader is the cross-platform PDF Reader class using the template method pattern
template <typename Delegate>
class PDFReader
{
public:
    PDFReader()
        : _delegate(std::make_unique<Delegate>())
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

#if defined(__linux__)
#include "PDFReaderDelegate.Linux.h"
#elif defined(__APPLE__)
#include "PDFReaderDelegate.Mac.h"
#elif defined(_WIN32)
#include "PDFReaderDelegate.Windows.h"
#endif

#endif