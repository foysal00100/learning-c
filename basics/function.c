#include <stdio.h>
// Function to print "meow!" a specified number of times


void meow(void);

int main(void)
{
    for(int i = 0; i < 3; i++)
    {
        meow();
    }
}

void meow(void)
{
    printf("meow!\n");
}