#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

struct person
{
    char name[32];
    struct date tookoffice;
};

void show(struct person p[]){
    puts("Presidents : ");
    
    for (int x = 0; x < 4; x++)
    {
        printf("President %s took office on %d/%d/%d\n",
            p[x].name,
            p[x].tookoffice.month,
            p[x].tookoffice.day,
            p[x].tookoffice.year
        );
    };
}

int main() {
    //
    struct person presidents[] = {
        { "George Washington", { 4, 30, 1789 } },
		{ "Thomas Jefferson", { 3, 4, 1801 } },
		{ "Abraham Lincoln", { 3, 4, 1861 } },
		{ "Theodore Roosevelt", { 9, 14, 1901 } }
    };

    show(presidents);
    
    printf("Swapping...");
    struct person temp = presidents[3];
    presidents[3] = presidents[2];
    presidents[2] = temp;
    printf("done!\n");
    
    show(presidents);

    return(0);
}
