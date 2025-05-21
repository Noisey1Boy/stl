#include<stdio.h>
#include<ctype.h>

int main(){

    char c[100];
    int x = 10,y = 3;

    scanf("%s",&c);

    for(int i = 0;c[i];i++){

        switch (tolower(c[i]))
        {
        case 'u': y++;break;
        case 'd': y--;break;
        case 'r': x++;break;
        case 'l': x--;break;
            
        }



}
printf("%d %d",x , y);

return 0;
}