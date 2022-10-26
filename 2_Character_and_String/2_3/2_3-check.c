#include <stdio.h>
#include <ctype.h>

int main()
{
    char string[] = "Hello!\n";
    printf("Size of Hello!: %d", (int) sizeof(string));
    
    return(0);
}