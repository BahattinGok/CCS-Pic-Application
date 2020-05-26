//https://www.youtube.com/watch?v=ySIyj_lZEY8&list=PLGLOu03H3qkoKWlqnoo6i1y5t1N2X5Ydk&index=6

#include <16f876a.h>
#fuses xt, nowdt
#use delay(clock=4MHz)
#use fast_io(b)
#use fast_io(c)

int sayi=0;
int anahtar=0;
int a=0;
int b=0;
const int digit[10]={0b00111111,0b00000110,0b01011011,0b01001111 
                     0b01100110,0b01101101,0b01111101,0b00000111     
                     0b01111111,0b01101111 };
                     
const int EBE[2]={0b01111001,0b01111111};
const int DEDE[2]={0b00111111,0b01111001};
//                    
//          a

//    f            b
//          
//          g

//    e            c
//
//          d
//

void main()
{
   set_tris_b(0xff);
   set_tris_c(0x00);
   output_c(0x00);
   
   
   while(1)
   {
   
   //SORU1 
  /* 
   if(input(pin_b0)==1)
   {while(input(pin_b0)==1);
    sayi++;
    
    if(sayi==10)
    sayi=0;
   }
   
   */
   
 // SORU2
 
 /* if(input(pin_b0)==1)
   {while(input(pin_b0)==1);
    sayi++;
    
    if(sayi==10)
    sayi=0;
   }
   
   if(input(pin_b1)==1)
   {while(input(pin_b1)==1);
    sayi--;
    
    if(sayi==-1)
    sayi=9;
   }
    
    
    output_c(digit[sayi]);
    
    */
    
    
    
   // SORU3
   
  
  
     if(input(pin_b0)==1)
    {while(input(pin_b0)==1);
     anahtar=1;
    }
  
        if(input(pin_b1)==1)
       {while(input(pin_b1)==1);
        anahtar=2;
       }
     
  
    if(anahtar==1)
    {
     for(a=0; a<2; a++)
     {
       for(b=0; b<50; b++)
       {
        delay_ms(20);
        output_c(EBE[a]);
        
        
          if(input(pin_b1)==1)
          {while(input(pin_b1)==1);
           anahtar=2;
          }
        
        
       }
     }
    }
    
    
    if(anahtar==2)
    {
     for(a=0; a<2; a++)
     {
       for(b=0; b<50; b++)
       {
        delay_ms(20);
        output_c(DEDE[a]);
        
           if(input(pin_b0)==1)
          {while(input(pin_b0)==1);
           anahtar=1;
          }
        
       }
     }
    }
    
    
  
    
   }


}
