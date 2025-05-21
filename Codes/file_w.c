#include<stdio.h>
#include<string.h>

int main(){

    FILE *file = fopen("D:\\Codes\\write.txt","w");

    char name[] = "mahim ifty";
    char name1[25];
    int len = strlen(name);
    int age;

    if(file == NULL){
        printf("file is not found");
    }

    else{
        printf("file is opened\n");

       printf("enter your name: ");
       gets(name1);
       fputs(name1,file);
       //fputs("\n");

        printf("enter your age: ");
        scanf("%d",&age);
        fprintf(file," %d ",age);
        //fputs("\n");

        for(int i = 0; i < len;i++){
            fputc(name[i],file);
        }

        printf("file is written\n");
        fclose(file);
    }
    
}