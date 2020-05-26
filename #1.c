// https://www.youtube.com/watch?v=4DnoTtUjPqA&list=PLGLOu03H3qkoKWlqnoo6i1y5t1N2X5Ydk&index=18
#include <16f877a.h>
#fuses xt, nowdt
#use delay(clock=4Mhz)
#use fast_io(b)
int a=0, b=0;

void main ()

{  set_tris_b(0x00);
   output_b(0x00);

   while(1)
   {
     for(a=0; a<2; a++)
     {
      output_b(0xff);
      delay_ms(300);
      output_b(0x00);
      delay_ms(300);   
     }
     
      for(b=0; b<10; b++)
     {
      output_b(0b10010101);
      //         76543210
      delay_ms(300);
      output_b(0x00);
      delay_ms(300);   
     }
     
    

   }


}
