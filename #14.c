//https://www.youtube.com/watch?v=X41Gb-N9McI&list=PLGLOu03H3qkoKWlqnoo6i1y5t1N2X5Ydk&index=5

#include <16f876a.h>
#fuses xt,nowdt
#use delay(clock=4MHz)
#use fast_io(b)
#use fast_io(c)

int a=0;
int k=0;
int b=0;
const int digit[10]={0b10111111,0b00000110,0b01011011,0b01001111
//                                                    0bhgfedcba
                     0b01100110,0b01101101,0b11111101,0b00000111
//                                                    0bhgfedcba
                     0b01111111,0b01101111};                
//                              0bhgfedcba
//           a
 
//     f           b

//           g
//                
//     e           c
//
//           d

void main()
{
      set_tris_b(0x00);
      set_tris_c(0xff);
      
      while(1)
      {
       
       for(a=k; a<=9; a++)
       {
         k=a;
            
            for(b=0; b<10; b++)
            {
               delay_ms(50);
               output_b(digit[a]^0b11111111);
               
               
               if(input(pin_c0)==0)
               {
                  while(1)
                  {
                      output_b(digit[a]^0b11111111);
                      if(input(pin_c0)==1)
                      break;
                  }
               }   
            }
       }
       
       
       a=9;
       k=9;
       
       
       
       for(a=k; a>=1; a--)
       {
         k=a;
            
            for(b=0; b<10; b++)
            {
               delay_ms(50);
               output_b(digit[a]^0b11111111);
               
               
               if(input(pin_c0)==0)
               {
                  while(1)
                  {
                      output_b(digit[a]^0b11111111);
                      if(input(pin_c0)==1)
                      break;
                  }
               }   
            }
        }
        
      a=0;
      k=0;
       
       
       
       
      
      }


}
