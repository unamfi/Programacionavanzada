//Gerardo Balbuena Navor
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    printf("El programa verifica si una palabra contiene las vocales en orden.\n\n");
	char palabra[20];
    int i,tam,V[20],pos=0;
    printf("\n\tIntroduce una palabra\t");
    fflush(stdin);
    gets(palabra);
    tam = strlen(palabra);
    for(i=0;i<tam;i++)
    {
        if(palabra[i]=='a'||palabra[i]=='e'||palabra[i]=='i'||palabra[i]=='o'||palabra[i]=='u')
        {
            V[pos]=palabra[i];
            pos++;
        }
    }
    i=0;
    if(V[i]=='a'&& V[i+1]=='e'&&V[i+2]=='i'&&V[i+3]=='o'&&V[i+4]=='u')
        printf("\n\tLa palabra contiene las 5 vocales en orden\n");
    else
        printf("\n\tLas vocales en la palabra no estan en orden\n");

        system("PAUSE");
}
