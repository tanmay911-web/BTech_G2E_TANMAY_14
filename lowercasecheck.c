#include <stdio.h>

int main(){
    char x;
    printf("enter the charc");
    scanf("%c",&x);
    printf("the char is: %c\n",x);
    if (x>=97 && x<=120)
    {
        printf("the charc is lower");
    }
    else{
        printf("the char is not lower");
    }
    
    return 0;
}
