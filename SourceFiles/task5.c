#include <stdio.h>
#include <string.h>

struct student
{
    char last_name[20];
    char name[20], facult[20];
    int number;
};

int main()
{
    struct student stud[3] = {
        {"Ivanov", "Ivan", "FVT", 101},
        {"Petrov", "Petr", "FFFT", 102},
        {"Sidorov", "Sidor", "FIT", 103}
    };

    char search[20];
    int found = 0;

    printf("Enter last name to search: ");
    scanf("%20s", search);

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(stud[i].last_name, search) == 0)
        {
            printf("founded: %s %s, fakult %s, number %d\n",
                   stud[i].last_name, stud[i].name, stud[i].facult, stud[i].number);
            found = 1;
        }
    }

    if (!found)
        printf("Student not found\n", search);

    return 0;
}
