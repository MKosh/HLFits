#include "fitsio.h"
#include "HLFits.hpp"
#include <cstdio>
#include <longnam.h>

int main(int argc, char* argv[]) {
  std::cout << CFITSIO_MAJOR << '.'
            << CFITSIO_MINOR << '.'
            << CFITSIO_MICRO << std::endl;
  fitsfile* fptr;

  char card[FLEN_CARD];
  int status = 0, nkeys, ii;

  fits_open_file(&fptr, argv[1], READONLY, &status);
  fits_get_hdrspace(fptr,  &nkeys, nullptr, &status);

  for (ii = 1; ii <= nkeys; ii++) {
    fits_read_record(fptr, ii, card, &status);
    HLPrint(card);
  }
  HLPrint("END");

  fits_close_file(fptr, &status);

  if (status) {
    fits_report_error(stderr, status);
  }

  return status;

}
