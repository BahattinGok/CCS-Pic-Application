// https://www.youtube.com/watch?v=Ad_Q5YSWMSk&list=PLGLOu03H3qkoKWlqnoo6i1y5t1N2X5Ydk&index=14
#include <16f877a.h>
#fuses xt, nowdt
#use delay(clock=4MHz)
#use fast_io(b)
#use fast_io(d)

int sayi=0;

void main()
{

   set_tris_b(0xff);
   set_tris_d(0x00);
   output_d(0x00);
   
   while(1)
   {
   /*   SORU 1
   if(input(pin_b7)==1)
   {while(input(pin_b7)==1);
    sayi++;
   }
   
      
   if(sayi%2==1)
   output_d(0b10000000);
   
   if(sayi%2==0)
   output_d(0x00);
   
   
   */
   
   
   
   
   //SORU 2
   
   if(input_b()>=240 && input_b()<=255)
   {
     output_d(0xff);
     delay_ms(500);
     output_d(0x00);
     delay_ms(500);
   }
   
   
   
   }


}
