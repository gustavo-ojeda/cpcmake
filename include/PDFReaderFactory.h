#ifndef PDF_READER_FACTORY_H
#define PDF_READER_FACTORY_H

#include "PDFReader.h"
#if defined(__linux__)
#include "PDFReaderDelegate.Linux.h"
using PlatformDelegate = LinuxPDFReaderDelegate;
#elif defined(__APPLE__)
#include "PDFReaderDelegate.Mac.h"
using PlatformDelegate = MacPDFReaderDelegate;
#elif defined(_WIN32)
#include "PDFReaderDelegate.Windows.h"
using PlatformDelegate = WindowsPDFReaderDelegate;
#endif

static auto createPDFReader()
{
    return PDFReader<PlatformDelegate>{};
}

#endif // PDF_READER_FACTORY_H
