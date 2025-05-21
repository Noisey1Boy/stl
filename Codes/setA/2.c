#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int validate(char *line){  
}

int main(){

    char *line =NULL;
    size_t len = 0;
    ssize_t nread;

    printf("enter your line :\n");
    nread = getline(&line,&len,stdin);

    if(nread != -1){
        int s = sizeof(line)/sizeof(line[0]);
        for (int i = 0; i < s; i++)
        {
            printf("%c",*(line + i));
        }
        
        
    }

}
