//https://www.youtube.com/watch?v=hPkOmGM5kn0&list=PLGLOu03H3qkoKWlqnoo6i1y5t1N2X5Ydk&index=3

#include <16f877a.h>
#fuses xt,nowdt
#use delay(clock=4MHz)
#use fast_io(c)
#use fast_io(d)

const int dEdE[2]={0b01011110,  0b01111001};
//                   0    d        1    E


const int _EbE[3]={0b00001000,0b01111100, 0b01111001};
//                   0 _         1 b          2 E

/* SORU1-2
tarama1()
{

     // 1.Display
      output_low(pin_d0);
      output_c(dEdE[0]);
      delay_ms(5);
      output_high(pin_d0);

      // 2.Display
      output_low(pin_d1);
      output_c(dEdE[1]);
      delay_ms(5);
      output_high(pin_d1);
      
      // 3.Display      
      output_low(pin_d2);
      output_c(dEdE[0]);
      delay_ms(5);
      output_high(pin_d2);
      
      // 4.Display
      output_low(pin_d3);
      output_c(dEdE[1]);
      delay_ms(5);
      output_high(pin_d3);    

}


tarama2()
{

     // 1.Display
      output_low(pin_d0);
      output_c(_EbE[0]);
      delay_ms(5);
      output_high(pin_d0);

      // 2.Display
      output_low(pin_d1);
      output_c(_EbE[2]);
      delay_ms(5);
      output_high(pin_d1);
      
      // 3.Display      
      output_low(pin_d2);
      output_c(_EbE[1]);
      delay_ms(5);
      output_high(pin_d2);
      
      // 4.Display
      output_low(pin_d3);
      output_c(_EbE[2]);
      delay_ms(5);
      output_high(pin_d3);    

}


*/


// SORU3 
tarama1()
{

     // 1.Display
      output_high(pin_d0);
      output_c(dEdE[0]^0b11111111);
      delay_ms(5);
      output_low(pin_d0);

      // 2.Display
      output_high(pin_d1);
      output_c(dEdE[1]^0b11111111);
      delay_ms(5);
      output_low(pin_d1);
      
      // 3.Display      
      output_high(pin_d2);
      output_c(dEdE[0]^0b11111111);
      delay_ms(5);
      output_low(pin_d2);
      
      // 4.Display
      output_high(pin_d3);
      output_c(dEdE[1]^0b11111111);
      delay_ms(5);
      output_low(pin_d3);    

}


tarama2()
{

     // 1.Display
      output_high(pin_d0);
      output_c(_EbE[0]^0b11111111);
      //               0b76543210
      delay_ms(5);
      output_low(pin_d0);

      // 2.Display
      output_high(pin_d1);
      output_c(_EbE[2]^0b11111111);
      delay_ms(5);
      output_low(pin_d1);
      
      // 3.Display      
      output_high(pin_d2);
      output_c(_EbE[1]^0b11111111);
      delay_ms(5);
      output_low(pin_d2);
      
      // 4.Display
      output_high(pin_d3);
      output_c(_EbE[2]^0b11111111);
      delay_ms(5);
      output_low(pin_d3);    

}


void main()
{
     set_tris_c(0x00);
     set_tris_d(0x00);
     output_c(0);
     output_d(0xff);
     
     while(1)
     {
       if(input(pin_b0)==1)
       tarama1();
       
       if(input(pin_b0)==0)
       tarama2();
     }




}
