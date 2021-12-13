#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,ch;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("enter the choice:");
    scanf("%d",&ch);
    switch(ch){
    addition:
    case 1:
    c=a+b;
    printf("%d",c);
    break;
    substraction:
    case 2:
    d=a-b;
    printf("%d",d);
    break;
    multiplication:
    case 3:
    e=a*b;
    printf("%d",e);
    break;
    division:
    case 4:
    f=a/b;
    printf("%d",f);
    break;
    case 5:
    goto multiplication;
    break;
    default:
    printf("invalid input");
    
    
    return 0;
}}
© 2021 GitHub, Inc.
Terms
