#include <stdio.h>

int main()
{
    int a = 7;
    int *Pont;
    Pont = &a;

    printf("O endereco de a e\n: %p", &a);
    printf("\nO valor de aPtr e %p", Pont);
    printf("\n\nO valor de a e %d", *Pont);
    printf("\nO valor de *aPtr e %d", *Pont);
    printf("\n\nMostrando que * e & sao inversos um do outro.\n");
    printf("&*aPtr = %p", &*Pont);
    printf("\n*&aPtr = %p", *&Pont);


    return 0;
}