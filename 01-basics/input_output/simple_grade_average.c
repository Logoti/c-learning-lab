#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nota[4], media;

    printf("Diga quais são as 4 notas");
    scanf("%f %f %f %f",&nota[0],&nota[1],&nota[2],&nota[3]);

    media = (nota[0] + nota[1] + nota[2] + nota[3] ) / 4;

    printf("A média é %.2f\n",media);


    return 0;



}
