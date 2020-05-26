//https://www.youtube.com/watch?v=UbgQEfZI37g&list=PLGLOu03H3qkoKWlqnoo6i1y5t1N2X5Ydk&index=10

#include <16f877a.h>
#fuses xt, nowdt
#use delay(clock=4MHz)
#use fast_io(b)
#use fast_io(d)

int kapi=1, a=0, b=0;

void main()
{

   set_tris_b(0xff);
   set_tris_d(0x00);
   output_d(0x00);

   while(1)
   {
   
   /*  // SORU 1
   
      if(input(pin_b4)==1)
      {while(input(pin_b4)==1);
       kapi=1;
      }
   
   
   
   if(kapi==1)
   {
      for(a=b; a<=255; a++)
      {
         b=a;
         output_d(a);
         delay_ms(250);
      
      if(input(pin_b4)==1)
      {while(input(pin_b4)==1);
       kapi=0;
       break;
      }
      
      
      }
   
   }
   
   
   */
   
   // SORU 2
   
   
      if(input(pin_b5)==1)
      {while(input(pin_b5)==1);
       output_toggle(pin_d5);
      }
   
   }


}
