//https://www.youtube.com/watch?v=-hS0aRpMd0I&list=PLGLOu03H3qkoKWlqnoo6i1y5t1N2X5Ydk&index=4

#include <16F877a.h>
#fuses xt,nowdt
#use delay(clock=4MHz)
#use fast_io(b)
#use fast_io(c)
#use fast_io(d)

int sayi=0;
int a=0;
const int digit[10]={0b10111111,0b00000110,0b01011011,0b01001111
//                   0bhgfedcba
                     0b01100110,0b01101101,0b11111101,0b00000111
//                                                    0bhgfedcba
                     0b01111111,0b01101111};                
//                                                  0bhgfedcba
const int kod[5]={0b11111100,0b01100000,0b11011010, 0b11110010, 0b01100110};
void main()
{
   set_tris_b(0xff);
   set_tris_c(0x00);
   set_tris_d(0x00);
   output_c(0);
   output_d(0);

   
   while(1)
   {
  
  
     
  /*  SORU1
  
   if(input(pin_b2)==1)
   {
   while(input(pin_b2)==1);
   sayi++;
   
   if(sayi==10)
   sayi=0;
   }
   
   
   
   if(input(pin_b3)==1)
   {
   while(input(pin_b3)==1);
   sayi--;
   
   if(sayi==-1)
   sayi=9;
   }
   
   output_high(pin_c1);
   output_d(digit[sayi]);
   
   
  */
  
  
  // SORU2
     
     
      output_high(pin_c0);
      
      
      for(a=0; a<=4; a++)
      {
        output_d(kod[a]);
        delay_ms(900);
      
      }
      
      for(a=3; a>=1; a--)
      {
        output_d(kod[a]);
        delay_ms(900);
      
      }
   

   }

}
