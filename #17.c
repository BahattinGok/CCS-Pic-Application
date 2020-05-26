//https://www.youtube.com/watch?v=nBm2d8goZGQ&list=PLGLOu03H3qkoKWlqnoo6i1y5t1N2X5Ydk&index=1

#include <16F877a.h>
#fuses xt, nowdt
#use delay(clock=4MHz)
#use fast_io(b)
#use fast_io(c)
#use fast_io(d)

const int rakam[10]={0,1,2,3,4,5,6,7,8,9};

int anahtar=0, anahtar1=0;
int16 sayi=0;
int16 binler=0,yuzler=0, onlar=0, birler=0, kalan=0;


/*  SORU 1

tarama()
{
    output_low(pin_c4);//  1 aktif edildi
    output_d(rakam[1]);  // 1 bcd degeri gondeildi
    delay_ms(10);
    output_high(pin_c4);//  pasif edldi

    output_low(pin_c2);//  2 aktif edildi
    output_d(rakam[2]);  // 2 bcd degeri gondeildi
    delay_ms(10);
    output_high(pin_c2);//  pasif  edildi
    
    output_low(pin_c1);//  2 aktif edildi
    output_d(rakam[3]);  // 2 bcd degeri gondeildi
    delay_ms(10);
    output_high(pin_c1);//  pasif  edildi
    
    output_low(pin_c0);//  2 aktif edildi
    output_d(rakam[4]);  // 2 bcd degeri gondeildi
    delay_ms(10);
    output_high(pin_c0);//  pasif  edildi
}

*/

basamak_bul()
{
   binler=sayi/1000;   // 4,512  > 4
   kalan=sayi%1000;    // 4,512  >512
   yuzler=kalan/100;   // 5,12   > 5
   kalan=kalan%100;    // 5,12   > 12
   onlar=kalan/10;     // 1,2    >1
   birler=kalan%10;    // 1,2    >2

}

tarama()
{
    output_low(pin_c4);//  1 aktif edildi
    output_d(rakam[binler]);  // 1 bcd degeri gondeildi
    delay_ms(10);
    output_high(pin_c4);//  pasif edldi

    output_low(pin_c2);//  2 aktif edildi
    output_d(rakam[yuzler]);  // 2 bcd degeri gondeildi
    delay_ms(10);
    output_high(pin_c2);//  pasif  edildi
    
    output_low(pin_c1);//  2 aktif edildi
    output_d(rakam[onlar]);  // 2 bcd degeri gondeildi
    delay_ms(10);
    output_high(pin_c1);//  pasif  edildi
    
    output_low(pin_c0);//  2 aktif edildi
    output_d(rakam[birler]);  // 2 bcd degeri gondeildi
    delay_ms(10);
    output_high(pin_c0);//  pasif  edildi
}


void main()
{
   set_tris_b(0xff);
   set_Tris_c(0x00);
   set_Tris_d(0x00);
   
   
   while(1)
   {
     if(input(pin_b0)==0)
     anahtar=0;
     
     if(input(pin_b0)==1 && anahtar==0)
     {anahtar=1;
      sayi++;    
      
         if(sayi==10000)
         sayi=0;
     }
     
     
     
     if(input(pin_b1)==0)
     anahtar1=0;
     
     if(input(pin_b1)==1 && anahtar1==0)
     {anahtar1=1;
      sayi--;    
      
         if(sayi==-1)
         sayi=9999;
     }
     
     basamak_bul();
     tarama();
     

   
   }


}
