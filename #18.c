//https://www.youtube.com/watch?v=08eRA0H6h8g&list=PLGLOu03H3qkoKWlqnoo6i1y5t1N2X5Ydk&index=2

#include <16f877a.h>
#fuses xt, nowdt
#use delay(clock=4MHz)
#use fast_io(b)
#use fast_io(c)
#use fast_io(d)

const int digit[10]={0b00111111,0b00000110,0b01011011,0b01001111,
                     0b01100110,0b01101101,0b01111101,0b00000111,
                     0b01111111,0b01101111};
int16 sayi1=984;
int16 sayi2=0;

int16 yuzler1=0, onlar1=0, birler1=0, kalan1=0;
int16 yuzler2=0, onlar2=0, birler2=0, kalan2=0;

basamak_bul1()
{
  yuzler1=sayi1/100;  // 984/100=9,84 ---->9
  kalan1=sayi1%100;    // 984%100= 9,84 ---->84
  onlar1=kalan1/10;    //84/10=8,4  -------->8
  birler1=kalan1%10;   //84%10=8,4 --------> 4
}

basamak_bul2()
{
  yuzler2=sayi2/100;  // 984/100=9,84 ---->9
  kalan2=sayi2%100;    // 984%100= 9,84 ---->84
  onlar2=kalan2/10;    //84/10=8,4  -------->8
  birler2=kalan2%10;   //84%10=8,4 --------> 4
}

tarama()
{
     //1.display
     output_high(pin_c0);
     output_b(digit[yuzler1]^0b11111111);
     //                        76543210
     delay_ms(5);
     output_low(pin_c0);
     
     
     //2.display
     output_high(pin_c1);
     output_b(digit[onlar1]^0b11111111);
     delay_ms(5);
     output_low(pin_c1);
     
     
     //3.display
     output_high(pin_c2);
     output_b(digit[birler1]^0b11111111);
     delay_ms(5);
     output_low(pin_c2);

     //4.display
     output_high(pin_c3);
     output_b(0b00001000^0b11111111);
     delay_ms(5);
     output_low(pin_c3);
     
     //5.display
     output_high(pin_c4);
     output_b(0b00001000^0b11111111);
     delay_ms(5);
     output_low(pin_c4);
     
     //6.display
     output_high(pin_c5);
     output_b(digit[yuzler2]^0b11111111);
     delay_ms(5);
     output_low(pin_c5);
     
     //7.display
     output_high(pin_c6);
     output_b(digit[onlar2]^0b11111111);
     delay_ms(5);
     output_low(pin_c6);

     //8.display
     output_high(pin_c7);
     output_b(digit[birler2]^0b11111111);
     delay_ms(5);
     output_low(pin_c7);
}


void main()
{
   set_tris_b(0x00);
   set_tris_c(0x00);
   set_tris_d(0xff);
   output_c(0xff);
   
   while(1)
   {
   
   // sayi1 
   if(input(pin_d0)==1)
   {while(input(pin_d0)==1);
    sayi1++;
    
    if(sayi1==1000)
    sayi1=0;
   }
   
    if(input(pin_d1)==1)
   {while(input(pin_d1)==1);
    sayi1--;
    
    if(sayi1==-1)
    sayi1=999;
   }
   
   
   //sayi2
   
   if(input(pin_d2)==1)
   {while(input(pin_d2)==1);
    sayi2++;
    
    if(sayi2==1000)
    sayi2=0;
   }
   
    if(input(pin_d3)==1)
   {while(input(pin_d3)==1);
    sayi2--;
    
    if(sayi2==-1)
    sayi2=999;
   }
   
   basamak_bul1();
   basamak_bul2();
   tarama();
   
   
   
   }


}
