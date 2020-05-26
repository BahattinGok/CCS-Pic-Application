// https://www.youtube.com/watch?v=adO1YVje2Vk&list=PLGLOu03H3qkoKWlqnoo6i1y5t1N2X5Ydk&index=17
#include <16f877a.h>
#fuses xt, nowdt
#use delay(clock=4MHz)
#use fast_io(b)
#use fast_io(d)
int8 deger=0b00000001;
//           76543210
int a=0;

void main()
{

   set_tris_b(0x00);
   set_tris_d(0xFF);
   
   output_b(0x00);
  
   while(1)
   
   {
   
  /*  SORU 1
     for(a=0; a<7; a++)
     {
      output_b(deger);
      delay_ms(100);
      deger=deger<<1;
     }
     
     deger=0b00000001;
     output_b(0x00);
     delay_ms(100);
   }
   */
   
    /*SORU 2
   
   if(input(pin_D0)==1)
   {
     while(input(pin_D0)==1);
     
     while(1)
     {
       output_b(0xff);
       delay_ms(200);
       
       output_b(0x00);
       delay_ms(200);
       
     }
   
   }
   */ 
   
   
    /* SORU 3
     while(input(pin_D0)==1)  
     {
       output_b(0xff);
       delay_ms(200);
       
       output_b(0x00);
       delay_ms(200);   
     }
     
     */
     
     
     
     // SORU 4
     
     
   if(input(pin_D0)==1)
   {
     while(1)
     {
       output_b(0xff);
       delay_ms(200);
       output_b(0x00);
       delay_ms(200);
       
        if(input(pin_D1)==1 || input(pin_D2)==1 )
        break;
     
     }
   
   }
   
   
    if(input(pin_D1)==1)
   {
     while(1)
     {
       output_b(0b01010101);
       //         76543210
       delay_ms(200);
       output_b(0x00);
       delay_ms(200);
       
        if(input(pin_D0)==1 || input(pin_D2)==1 )
        break;
     
     }
   
   }
   
   
     if(input(pin_D2)==1)
   {
      while(1)
      {
       output_b(0b01010101^0b11111111);
       //                    76543210
       delay_ms(200);
       output_b(0x00);
       delay_ms(200);
       
        if(input(pin_D0)==1 || input(pin_D1)==1 )
        break;
     
     }
   
   }
   
   
}

}
