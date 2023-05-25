#include <gtest/gtest.h>
#include "PDFReaderFactory.h"

TEST(PDFReaderLib, readPDF)
{
    PDFReader<PlatformDelegate> pdfReader = createPDFReader();
    ASSERT_NO_THROW(pdfReader.readPDF("example.pdf"));
}
