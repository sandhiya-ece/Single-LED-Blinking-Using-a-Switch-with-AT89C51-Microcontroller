#include<reg51.h>
sbit sw=P2^0;
sbit led=P2^1;
void main()
{
while(1)
{
if(sw==0)
led=1;
else
led=0;
}}