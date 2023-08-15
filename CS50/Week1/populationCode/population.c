#include <stdio.h>

int initialPopulation;
int finalPopulation;
int years;

int getInitialPopulation() {
    do {
        printf("Write the start population: ");
        scanf("%d", &initialPopulation);

        while (getchar() != '\n');

        if (initialPopulation < 9) {
            printf("You must provide at least 9!\n");
        }

    } while (initialPopulation < 9);
    return 0;
}

int getFinalPopulation() {
    do {
        printf("Write the final population: ");
        scanf("%d", &finalPopulation);

        while (getchar() != '\n');

        if (finalPopulation < initialPopulation) {
            printf("You must provide an end population greater than the initial one.\n");
        }

    } while (finalPopulation < initialPopulation);
    return 0;
}

int calculateNeededYears() {
    int totalPopulation = initialPopulation;
    years = 0;

    while (totalPopulation < finalPopulation) {
        totalPopulation += totalPopulation / 3 - totalPopulation / 4;
        years++;
    }

    return years;
}

int main() {
    getInitialPopulation();
    getFinalPopulation();
    printf("It will take %d years\n", calculateNeededYears());
    return 0;
}