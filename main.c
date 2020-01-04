#include <mega16.h>
#include <delay.h>
//////////////////////////////
int a,r,b,c,d,e,f,g;
int i[10];
bit h,j;
char digits[10]={0xbF,0x86,0xdB,0xcF,0xe6,0xeD,0xfD,0x87,0xfF,0xeF};
char digits1[10]={0xfe,0xb0,0xed,0xf9,0xb3,0xdb,0xdf,0xf0,0xff,0xfb};
/////////////////////////////////
void main (void){
PORTA=0xff;
DDRA=0;
DDRC=0x7f;
DDRB=0xff;
DDRD=0;
PORTB=digits1[f]; 
PORTC=digits[e];
delay_ms(100);
 while(1){ 
 if(PIND.7 && PIND.2 && PINC.7){h=1;}
 if(PINA.5 && PINA.6){g=1;}
  if((!PIND.7 || !PINC.7 || !PIND.2)&&(!PINA.5 || !PINA.6)&&h&&g){
  c++;
  e=c/10;
  f=c%10;
  PORTB=digits1[f]; 
  PORTC=digits[e]; 
  delay_ms(100); 
  h=0;
  g=0;
  }
 }
}