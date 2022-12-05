#include<stdio.h>
int main()
{
    FILE *fp;
    char text[5];
    fp=fopen("C:\\Users\\home\\Documents\\files of c\\secondfile.txt","rb");
    if(fp==NULL)
    {
        printf("file cannot be opened\n");
        exit(1);
    }
    printf("the text of the file is:\n");
   /* while(fgets(text,50,fp)!=NULL){
    printf("%s",text);}*/
    fgets(text,50,fp);//**middle number indicates how many characters to be extracted from the file without using any loops**
    printf("%s",text);
    fclose(fp);
}
