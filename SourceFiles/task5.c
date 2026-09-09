#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char last_name[20];
    char name[20], facult[20];
    int number;
};

int main()
{
    int max_size = 4, size = 0; 
    struct student *stud = malloc(max_size * sizeof(struct student));
    char search[20];
    int found = 0;


    while (1)
    {
        printf("Enter last name\n");
        scanf("%19s", stud[size].last_name);
        if (stud[size].last_name[0] == '%')
            break;
        printf("Enter name\n");
        scanf("%19s", stud[size].name);
        if (stud[size].name[0] == '%')
            break;
        printf("Enter facult\n");
        scanf("%19s", stud[size].facult);
        if (stud[size].facult[0] == '%')
            break;
        printf("Enter number\n");
        scanf("%i", &stud[size].number);

        size++;

        if (size >= max_size){
            max_size *= 2;
            stud = realloc(stud, max_size * sizeof(struct student));
        }
    }
    

    
    printf("Enter text to search: ");
    scanf("%20s", search);

    for (int i = 0; i < size; i++)
    {
        if (strcmp(stud[i].last_name, search) == 0)
        {
            printf("founded: %s %s, fakult %s, number %d\n",
                   stud[i].last_name, stud[i].name, stud[i].facult, stud[i].number);
            found = 1;
        }

        if (strcmp(stud[i].name, search) == 0)
        {
            printf("founded: %s %s, fakult %s, number %d\n",
                   stud[i].last_name, stud[i].name, stud[i].facult, stud[i].number);
            found = 1;
        }

        if (strcmp(stud[i].facult, search) == 0)
        {
            printf("founded: %s %s, fakult %s, number %d\n",
                   stud[i].last_name, stud[i].name, stud[i].facult, stud[i].number);
            found = 1;
        }
    }

    if (!found)
        printf("Student not found\n");

    free(stud);

    return 0;
}
