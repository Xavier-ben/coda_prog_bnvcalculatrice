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
        int res = n1 + n2;
        printf("additon \n");
        printf("%d %c %d = %d\n", n1, op, n2, res);
        
    }
    else if(op == '-')
    {
        int res = n1 - n2;
        printf("soustraction \n");
        printf("%d %c %d = %d\n", n1, op, n2, res);

    }
    else if(op == '/')
    {
        double res = n1 / n2;
        printf("division \n");
        printf("%d %c %d = %.2f\n", n1, op, n2, res);

    }
    else if(op == '*')
    {
        int res = n1*n2;
        printf("multiplication \n");
        printf("%d %c %d = %d\n", n1, op, n2, res);

    }
    else if(op == '%')
    {
        int res = n1 % n2;
        printf("modulo \n");
        printf("%d %c %d = %d\n", n1, op, n2, res);

    }
    else
    {
        printf("opérateur non reconnu");
    }
    exit(0);
}