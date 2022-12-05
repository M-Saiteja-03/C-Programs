#include<stdio.h>
int main()
{
    FILE *fp;
    int i;
    char ch;
    fp=fopen("C:\\Users\\home\\Documents\\files of c\\secondfile.txt","r");
    if(fp==NULL)
    {
        printf("file cannot be opened\n");
        exit(1);
    }
    printf(" the text of the file is:\n");
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
}

