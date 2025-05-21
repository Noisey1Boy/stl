#include<stdio.h>
#include<string.h>

int main(){
    FILE *file = fopen("D:\\Codes\\read.txt","r");
    char fname[35];
    char lname[35];

    // while (!feof(file))
    // {
    //     char c = fgetc(file);
    //     printf("%c",c);
    // } 
    
    // fscanf(file,"%s %s",&fname,&lname);
    // printf("%s %s",fname,lname);

    while (!feof(file))
    {
        fgets(fname,34,file);
        printf("%s",fname);   
    }
    
    fclose(file); 
}