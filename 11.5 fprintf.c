#include<stdio.h>
int main()
{
    FILE *fp;
    char text[255];
    fp=fopen("C:\\Users\\home\\Documents\\files of c\\fprintffile.txt","w");
    printf("enter the text to transfer it to the file:\n");
    gets(text);
    fprintf(fp,"%s",text);
    fclose(fp);
}
