#include<stdio.h>
int main()
{
    FILE *fp;
    char text[255];
    fp=fopen("C:\\Users\\home\\Documents\\files of c\\secondfile.txt","r");
    fscanf(fp,"%s",text);
    printf("%s",text);
    fclose(fp);
}
