// https://www.youtube.com/watch?v=xddY9ryJjtY&list=PLGLOu03H3qkoKWlqnoo6i1y5t1N2X5Ydk&index=12

#include <16f877a.h>
#fuses xt, nowdt
#use delay(clock=4MHz)
#use fast_io(b)
#use fast_io(d)

int butonartir=0;
int butonazalt=0;
int cikis=0;

int anahtar0=0,anahtar1=0,anahtar2=0,anahtar3=0, anahtar7=0;
int a0=0, a1=0, a7=0, sayac=0,a=0,b=0,d=0, e=40,f=0,g=33, x=0, y=0;
int kapi=0;

void main()
{

   set_tris_b(0xff);
   set_tris_d(0x00);
   output_d(0x00);
   
   while(1)
   { 
   
   /*  SORU 1
   if(input(pin_b0)==1 || input(pin_b7)==1)
   {while(input(pin_b0)==1 || input(pin_b7)==1);
    butonartir++;
   }
   
   if(butonartir==2)
   {
    cikis++;
    butonartir=0;
   }
   
   
   
   if(input(pin_b1)==1 || input(pin_b6)==1)
   {while(input(pin_b1)==1 || input(pin_b6)==1);
    butonazalt++;
   }
   
   if(butonazalt==3)
   {
    cikis--;
    butonazalt=0;
   }
   
   
   if(cikis==4)
   cikis=0;
   
   if(cikis==-1)
   cikis=3;
   
   
   
   output_d(cikis);
   
   
   */ 
   
   // SORU 3
   
   
   // B0 ANAHTARLAMA
   if(input(pin_b0)==1 && a0==0)
   {
     a0=1;
     anahtar0=1;
   }
   
   if(input(pin_b0)==0)
   a0=0;
 //--------------------
 
 
 // B1 ANAHTARLAMA
  
   if(input(pin_b1)==1 && a1==0)
   {
     a1=1;
     anahtar1=1;
   }
   
   if(input(pin_b1)==0)
   a1=0;

// -------------------

// B2 ANAHTARLAMA SAYAC=2 OLUNCA
   if(input(pin_b2)==1)
   {while(input(pin_b2)==1);
    sayac++;
   
     if(sayac==2)
       {sayac=0;
        anahtar2=1;
       }
   }
   
// B3 ANAHTARLAMA
   if(input(pin_b3)==1)
   {while(input(pin_b3)==1);
    anahtar3=1;
   }
   
   
// B7 ANAHTARLAMA
  
  if(input(pin_b7)==1 && a7==0)
   {
     a7=1;
     kapi=0;
   }
   
   if(input(pin_b7)==0)
   a7=0;
   
   
   
//B0 CALISMA

   if(anahtar0==1 && kapi ==0)
   {
   
      if(a==9 || b==9)
      break;
   
   for(a=b; a<=9; a++)
   {
      b=a;
      output_d(0xff);
      delay_ms(500);
      output_d(0x00);
      delay_ms(500);
      
      

   
   if(input(pin_b7)==1 && a7==0)
   {
     a7=1;
     kapi=1;
   }
   
   if(input(pin_b7)==0)
   a7=0;
   
   if(kapi==1)
   { b++;
     break;
   }
   }
   
   }
   
   
   
// B1 CALISMA

   if(anahtar1==1 && kapi ==0)
   {
       
   for(d=e; d>=30; d--)
   {
      e=d;
      output_d(e);
      delay_ms(500);

      
   if(input(pin_b7)==1 && a7==0)
   {
     a7=1;
     kapi=1;
   }
   
   if(input(pin_b7)==0)
   a7=0;
   
   if(kapi==1)
   {
     break;
   }
   }
   
   }
   
// B2 CALISMA

   if(anahtar2==1 && kapi ==0)
   {
       
   for(f=g; f>=20; f--)
   {
      g=f;
      output_d(f);
      delay_ms(500);

      
   if(input(pin_b7)==1 && a7==0)
   {
     a7=1;
     kapi=1;
   }
   
   if(input(pin_b7)==0)
   a7=0;
   
   if(kapi==1)
   {
     break;
   }
   }
   }
   
   
// B3 CALISMA
 
   if(anahtar3==1 && kapi ==0)
   {
       
   for(x=y; x<=30; x++)
   {
      y=x;
      
      if(x%3==0)
      {output_d(x);
      delay_ms(1000);
      }

      
   if(input(pin_b7)==1 && a7==0)
   {
     a7=1;
     kapi=1;
   }
   
   if(input(pin_b7)==0)
   a7=0;
   
   if(kapi==1)
   {
     break;
   }
   }
   
   
   
   }
   
   
   }
   
   }
   

