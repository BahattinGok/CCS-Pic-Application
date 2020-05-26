//https://www.youtube.com/watch?v=-XB80nuNMYQ&list=PLGLOu03H3qkoKWlqnoo6i1y5t1N2X5Ydk&index=9
#include <10f200.h>
#fuses nowdt,NOMCLR
#use delay(clock=4MHz)
#use fast_io(b)


int sayi=0;

void main()
{
   set_tris_b(0b00001000);
   //           76543210


  // 1.YOL
  /*
   output_b(0b00000001);
   
   while(1)
   {
      if(input(pin_b3)==0)
      {while(input(pin_b3)==0);
       output_toggle(pin_b0);// kirmizi led terslsin
       output_toggle(pin_b1);// yesil led terslsin
       output_toggle(pin_b2);
      }
   
   }
   
   */
   
   
   
   // 2. YOL
   output_b(0x00);
   
   while(1)
   { if(input(pin_b3)==0)
      {while(input(pin_b3)==0);
       sayi++;
      }
   
   if(sayi%2==0)
   {output_low(pin_b1);
    output_high(pin_b0);
    output_low(pin_b2);
   }
   
   
   if(sayi%2==1)
   {output_high(pin_b1);
    output_low(pin_b0);
    output_high(pin_b2);
   }
   
   }

   
   
   

}
