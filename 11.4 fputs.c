#include<stdio.h>
int main()
{
    char text[255];
    FILE *fp;
    fp=fopen("C:\\Users\\home\\Documents\\files of c\\putsfile.txt","w");
    printf("enter the text to transfer it to the file:\n");
    gets(text);
    fputs(text,fp);
    fclose(fp);
}
