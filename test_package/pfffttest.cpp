#include <pffft.h>
#include <fftpack.h>

#include <iostream>

int main() {

   auto* s = pffft_new_setup(64, PFFFT_COMPLEX);
   int Nbytes = 128  * sizeof(float);
   auto* r = pffft_aligned_malloc(Nbytes);

   if (s && r)
   {
      std::cout << "pffft test is working" << std::endl;
      pffft_destroy_setup(s);
      pffft_aligned_free(r);
   }
   else
   {
      std::cout << "pffft test has failed" << std::endl;
   }

   return 0;
}
