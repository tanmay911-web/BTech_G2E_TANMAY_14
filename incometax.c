#include <stdio.h>

int main(){
    int i;
    float tax=0;
    printf("enter the income");
    scanf("%d",&i);
    if (i<=250000)
    {
       tax=0;
    }
    else if (i>250000 && i<=500000)
    {
        tax = 0.05 * (i-250000);
    }
    else if (i>500000 && i<=1000000)
    {
        tax= 0.05 * (500000-250000) + 0.20 * (i-500000);
    }
    else {
        tax=    0.05*(500000-250000)  +  0.20 * (1000000-500000) + 0.30 * (i-1000000);
    }
    
    printf("the total tax is %.2f",tax);

    return 0;
}
