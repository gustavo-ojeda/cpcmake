#include "PDFReaderFactory.h"

int main()
{
    PDFReader<PlatformDelegate> pdfReader = createPDFReader();
    pdfReader.readPDF("sample.pdf");

    return 0;
}