#include<stdio.h>
int main()
{
    char str[20];
    fgets(str,20,stdin);
    puts(str);
    FILE *fp=fopen("C:\\Users\\home\\Documents\\files of c\\age.txt","r");
    if(fp==NULL)
            printf("error");
    else
    {
        fgets(str,20,fp);
        puts(str);
    }
    fclose(fp);
}
