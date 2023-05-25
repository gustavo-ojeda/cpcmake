#include "PDFReaderFactory.h"

int main()
{
    PDFReader<PlatformDelegate> pdfReader = createPDFReader();
    pdfReader.readPDF("example.pdf");

    return 0;
}