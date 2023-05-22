#include "PDFReader.h"

#if defined(__linux__)
using PlatformDelegate = LinuxPDFReaderDelegate;
#elif defined(__APPLE__)
using PlatformDelegate = MacPDFReaderDelegate;
#elif defined(_WIN32)
using PlatformDelegate = WindowsPDFReaderDelegate;
#endif

int main()
{
    PDFReader<PlatformDelegate> pdfReader;
    pdfReader.readPDF("sample.pdf");

    return 0;
}