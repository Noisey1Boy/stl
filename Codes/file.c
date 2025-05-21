#include<stdio.h>

int main(){

    FILE *f = fopen("doc.txt","r");
    char name[255];
    char num[255];

    if(f == NULL)
    {
        printf("unable to find file");
    }

    else
    {
        
        for(int i = 0;fchar(f)!= EOF;i++){
            if(i % 2 != 0 && fchar(f) != "/0")
            {
                putchar(name[i]);
            }

            else{
                putchar(num[i]);
            }
        }
    }



    for(int i = 0;i <sizeof(name);i++){
        printf("%s",name[i]);
    }


    fclose(f);
}