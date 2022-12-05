#include<stdio.h>
#include<stdio.h>
#include<string.h>

struct player
{
    char name[20], role[20];
    int score, age, wickets;
};

int get_input_number(char *filename)
{
    int i = 0;
    char line[20];
    FILE *file = fopen(filename, "r");
    if (file != NULL)
        while (fgets(line, 512, file))
            i++;

    fclose(file);
    return i;
}

int main()
{
    FILE *name_file = fopen(".\\names.txt", "r"), *age_file = fopen(".\\age.txt", "r");
    int number =  get_input_number(".\\names.txt");

    struct player *players = (struct player*)malloc(number * sizeof(struct player));

    for (int i = 0; i < number; i++)
    {
        fgets(players[i].name, 512, name_file);
        players[i].name[strlen(players[i].name) - 1] = '\0';
        fscanf(age_file, "%d", &players[i].age);
        strcpy(players[i].role, "\0");
        players[i].score = 0;
        players[i].wickets = 0;
    }

    int n;

    while (1)
    {
        printf("Please enter the number of records to display or -1 to quit: ");
        scanf("%d", &n);

        if (n == -1 || n > number)
            break;

        printf("%-20s %s \t %s \t %-20s %s \n", "NAME", "AGE", "SCORE", "ROLE", "WICKETS");
        for (int i = 0; i < n; i++)
        {
            printf("%-20s %d \t %d \t %-20s %d \n", players[i].name, players[i].age, players[i].score, players[i].role, players[i].wickets);
        }
    }

    fclose(name_file);
    fclose(age_file);
    return 0;
}
