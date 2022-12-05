#include<stdio.h>
int main()
{
    FILE *fp;
    int i;
    char text[50];
    fp=fopen("C:\\Users\\home\\Documents\\files of c\\secondfile.txt","w");
    if(fp==NULL)
    {
        printf("file cannot be opened\n");
        exit(1);
    }
    printf("enter the text to transfer it to the file:\n");
    gets(text);
    for(i=0;i<strlen(text);i++)
    {
        fputc(text[i],fp);
    }
    fclose(fp);
}
