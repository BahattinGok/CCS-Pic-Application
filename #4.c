// https://www.youtube.com/watch?v=BdnbHhE_vFY&list=PLGLOu03H3qkoKWlqnoo6i1y5t1N2X5Ydk&index=15
#include <16f877a.h>
#fuses xt, nowdt
#use delay(clock=4MHz)
#use fast_io(d)
#use fast_io(b)

int deger= 0b00000001;
int deger2=0b00000011;
//           76543210

int a=0, b=0;

void main()
{
   set_tris_d(0x00);
   set_tris_b(0xff);
   output_d(0x00);


   while(1)
   
   {
   /* SORU 1
     for(b=0; b<=4; b++)
     {
      for(a=0; a<7; a++)
      {
        output_d(deger);
        deger=deger<<1;
        delay_ms(500);     
       }
     
       // 0b10000000;
       //   76543210
     
       for(a=0; a<7; a++)
       {
        output_d(deger);
        deger=deger>>1;
        delay_ms(500);     
       }
      }
      
      while(1)
      output_d(0xff);
      
     */ 
     
     
     // SORU 2
     
     /*
     for(b=0; b<=2; b++)
     {
      for(a=0; a<6; a++)
      {
        //deger2= 0b00000011
        
        output_d(deger2);
        deger2=deger2<<1;
        delay_ms(500);     
       }
     
       // 0b11000000;
       //   76543210
     
       for(a=0; a<6; a++)
       {
        output_d(deger2);
        deger2=deger2>>1;
        delay_ms(500);     
       }
      }
      
      while(1)
      output_d(0x00);
      
      */
      
      // SORU 3
      
      
     /* if(input(pin_b0)==1)
      output_d(0x01);
      
      if(input(pin_b1)==1)
      output_d(0x02);
      
      
      if(input_b()==1)
      output_d(0x01);
      
      if(input_b()==2)
      output_d(0x02);
      */
      
      
      
      
      
      //SORU4
      
      if(input(pin_b0)==0 && input(pin_b1)==0)
      output_d(0xff);
      
      if(input(pin_b0)==0 && input(pin_b1)==1)
      output_d(0xf0);
      
      if(input(pin_b0)==1 && input(pin_b1)==0)
      output_d(0x0f);
      
      if(input(pin_b0)==1 && input(pin_b1)==1)
      output_d(0x01);
      
      
      
   }

}



