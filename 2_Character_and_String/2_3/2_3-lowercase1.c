#include <stdio.h>
#include <ctype.h>

int main()
{
    char string[] = "My aunt types ger email in ALL CAPS.\n";
    int ch;
    int x = 0;

    while ((ch = string[x]) != '\0' )
    {
        putchar( toupper(ch) );
        x++;
    }

    return(0);
    
}