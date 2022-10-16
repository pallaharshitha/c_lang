#include<stdio.h>
void HexToBin(char* hexdec)
void main()
{
unsigned int a=0xa2c3;
printf("%x\n",~a,HexToBin(hexdec));
printf("%x\n",a^0x3f06);
printf("%x\n",a|0x3f06);
printf("%x\n",a|~0x3f06);
printf("%x\n",a>>3);
printf("%x\n",a<<5);
printf("%x\n",a^~a);
printf("%x\n",a|~a);
printf("%x\n",(a&~0X3f06)<<8);
printf("%x\n",a&~(0x3f06>>8));
}
