#include<stdio.h>

int main()

{
 int days;
 
 printf("the number of days:");
 scanf("%d",&days);

 int a = days/365;

 printf("the divison is %d",a);

 int years;

 printf("enter the any years:");
 scanf("%d",&years);

 int b = years*365;

 printf("the multiplication is %d",b);

}