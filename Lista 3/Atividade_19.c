#include <stdio.h>
int main()
{
int a = 2, b = 4, c = 4;
if((a<2) && ((b!=3) || (c==3)))
printf("saída 1");
if((c == 3) || (c == 4))
printf("saida 2");
if((a < 3) && (b > 4))
printf("saida 3");
else if (a == 2)
if (b == 5)
printf("saida 4");
else printf("saida 5");
else printf("saida 6");

    return 0;
}