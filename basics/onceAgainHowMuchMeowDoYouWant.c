#include <stdio.h>
// Function to print "meow!" a specified number of times

void meow(int n){
    int i=0;
    while(i < n){
        printf("meow!\n");
        i++;
    }
}

int main(void)
{
    int times;
    printf("How many times do you want to meow? ");
    scanf("%d", &times);
    meow(times);
    return 0;
}