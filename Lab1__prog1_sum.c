#include<stdio.h>
#include<conio.h>
int main () {
    float m1,m2,m3,m4,m5,sum,percentage;
    printf("enter the marks of 5 subjects:\n ");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    sum=m1+m2+m3+m4+m5;
    percentage=sum/500*100;
    printf("total marks=%.2f\n",sum);
    printf("total percentage=%.2f\n",percentage);
    return 0;
}












