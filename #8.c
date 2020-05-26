// https://www.youtube.com/watch?v=yqCtS1zizOE&list=PLGLOu03H3qkoKWlqnoo6i1y5t1N2X5Ydk&index=11

#include <16f84a.h>
#fuses nowdt, xt
#use delay(clock=4MHz)
#use fast_io(a)
#use fast_io(b)

unsigned int i=0, m=0, k=0;

#define artir pin_A0
#define azalt pin_A1



void main()
{

   set_tris_a(0xff);
   set_tris_b(0x00);
   output_b(i);
   
   
   
   while(1)
   {
      if(input(artir)==1)
      {
      
         while(input(artir)==1);
         m++;
         
         if(m==2)
         {
            i++;
            
            if(i>3)
            i=0;
            
            output_b(i);
            m=0;
         }
      }
      
      
       if(input(azalt)==1)
      {
      
         while(input(azalt)==1);
         k++;
         
         if(k==3)
         {
            i--;
            
            if(i==255)
            i=3;
            
            output_b(i);
            k=0;
         }
      }
   }
}
