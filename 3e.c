#include <stdio.h>
void cen (int num)
{
if (num %2==0)
goto even;
else
goto odd;
even:
printf("%d is even", num);
return;
odd:
printf("%d is odd", num);
}
int main ()
{
int num=26;
cen(num);
return 0;
}