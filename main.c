#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n1;
    int n2;
    char op;
    printf("salam \n");
    printf("donnez un premier nombre : \n");
    scanf("%d", &n1);
    printf("donnez l'opération à effectuer parmi les suivantes + - * / %% : \n");
    scanf(" %c", &op);
    printf("entrez un deuxieme nombre : \n");
    scanf(" %d", &n2);
    if(op == '+')
    {
        printf("additon \n");
        
    }
    else if(op == '-')
    {
        printf("soustraction \n");

    }
    else if(op == '/')
    {
        printf("division \n");

    }
    else if(op == '*')
    {
        printf("multiplication \n");

    }
    else if(op == '%')
    {
        printf("modulo \n");

    }
    else
    {
        printf("opérateur non reconnu")
    }
    exit(0);
}