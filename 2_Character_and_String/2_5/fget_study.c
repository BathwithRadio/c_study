#include <stdio.h>

int main()
{
    char input[10];

    printf("Your name? : ");
    // buffer to store input, size of the buffer, the function fewer characters then this value
    fgets(input, 10, stdin);
    printf("Pleased to meet you, %s!\n",input);
	return(0);
}