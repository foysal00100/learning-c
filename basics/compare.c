#include <stdio.h>

int main() {
    double income;
    printf("Enter your annual income in USD: ");
    scanf("%lf", &income);

    if (income < 10000) {
        printf("You are classified as Poor.\n");
    } else if (income < 40000) {
        printf("You are classified as Lower Middle Class.\n");
    } else if (income < 100000) {
        printf("You are classified as Middle Class.\n");
    } else if (income < 1000000) {
        printf("You are classified as Upper Class.\n");
    } else {
        printf("You are classified as Uber Rich.\n");
    }

    return 0;
}