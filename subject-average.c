#include <stdio.h>

int main()
{
    float mat,sci,soc,tel,hin,total,avg;
    scanf("%f",&mat);
    scanf("%f",&sci);
    scanf("%f",&soc);
    scanf("%f",&tel);
    scanf("%f",&hin);
    total=mat+sci+soc+tel+hin;
    avg=total/5;
    printf("%f",total);
    printf("%f",avg);
    printf("\n");

    return 0;
}
