#include <main.h>

void main()
{

   while(TRUE)
   {
   output_b(0xFF);
   delay_ms(100);
   output_b(0x00);
   delay_ms(100);
   }

}
