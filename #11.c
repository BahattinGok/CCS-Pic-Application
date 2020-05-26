// https://www.youtube.com/watch?v=ePzkYUrH_IM&list=PLGLOu03H3qkoKWlqnoo6i1y5t1N2X5Ydk&index=8
#include <16f628a.h>
#fuses INTRC, nowdt, mclr
#use delay(clock=4MHz)
#use fast_io(a)
#use fast_io(b)

int buton6=0;
int buton7=0;

void main()
{

   set_tris_a(0b11000000);
   //           76543210

   set_tris_b(0x00);
   output_b(0xff);
   output_a(0x00);
   
   while(1)
   {
   // 0-3 sola dönüyor, rb7-0, rb6-1
   // 1-2 saga dönüyor, rb7-1, rb6-0
   
   if(input(pin_a6)==0)
   {while(input(pin_a6)==0);
    buton6++;
   }
   
   if(input(pin_a7)==0)
   {while(input(pin_a7)==0);
    buton7++;
   }

   
   if(buton6==3 && buton7!=4)// motor saga dön, rb6-0, rb7-1
   {
    buton6=0;
    output_a(0b00000110);
    output_low(pin_b6);
    output_high(pin_b7);
   }
   
   
   if(buton7==4 && buton6!=3)
   {
    buton7=0;
    output_a(0b00001001); // motor sola dön, rb6-1, rb7-0
    output_high(pin_b6);
    output_low(pin_b7);
   }
   

   }


}
