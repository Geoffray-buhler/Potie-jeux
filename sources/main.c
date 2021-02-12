#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char** argv)
{

int nombrechoisi = 0, nombreentrer = 0;
const int MAX = 1000, MIN = 1; 

srand(time(NULL));
nombrechoisi = (rand() % (MAX - MIN + 1)) + MIN;

do
{
    printf("quel est le nombre mystere ? ");
    scanf("%d", &nombreentrer);

    if (nombrechoisi > nombreentrer)
        printf("le nombre donnée est trop petit !\n\n");
    else if (nombrechoisi < nombreentrer)
        printf("le nombre donné est trop grand ! \n\n");
    else
        printf("Bravos vous avez trouver le bon nombre ! \n\n");
}   while (nombrechoisi != nombreentrer);
        return 0;

}