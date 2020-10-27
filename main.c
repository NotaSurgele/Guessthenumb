#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int check_numb(int nb, int numb)
{
    if (nb != numb)
        printf("Wrong number please try again\n");
    if (nb == numb)
        printf("grats you win the game !\n");
}

int usage(int ac, char **av)
{
    if (ac > 1 && av[1][0] == '-' && av[1][1] == 'h') {
        printf("Welcome to my game\n");
        printf("The goal of this game is to guess the good number\n");
        printf("It is only between 0 % 100\n");
        printf("Good luck");
        return 1;
    }
    return 0;
}

int main(int ac, char **av)
{
    srand(time(NULL));
    int numb = rand() % 101;
    int nb;

    if (usage(ac, av) == 1)
        return 0;

    printf("The goal of this game is to guess the number between 0 too 100\nGood luck !!!\n");

    while (nb != numb) {
        printf("\nEnter a Number between 0 to 100: ");
        scanf("%d", &nb);
        check_numb(nb, numb);
    }
    return 0;
}