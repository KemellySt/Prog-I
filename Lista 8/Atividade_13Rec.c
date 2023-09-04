#include <stdio.h>
int fatorial(int num)

int main()
{
    // Declarando as variáveis
    int num;



    return 0;
}
int fatorial(int num)
{
    int fat;
    if(num == 0)
    {
        return 1;
    }
    else
    {
        fat = num * fatorial(num-1);
    }
}