#include<AT89s52.h>
#define LED p1_7
void wait(int);
void main()
{
LED=1;
while(1)
{
LED=0;
wait(10);
LED=1;
wait(10);
}
}
