#include <stdio.h>
//function to print meow as much as your heart desires

void meow(int n){
    for(int i = 0; i < n; i++){
        printf("meow!\n");
    }
}

int main() {
    int times;
    printf("How many times do you want to meow? ");
    scanf("%d", &times);
    meow(times);
    return 0;
}