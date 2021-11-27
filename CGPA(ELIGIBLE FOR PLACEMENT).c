#include <stdio.h>

int main()
{
    float eng,c,java,phy,mat,total,percentage,cgpa;
    printf("to find the total cgpa in the btech");
    scanf("%f %f %f %f %f",&eng,&c,&java,&phy,&mat);
    total=eng+c+java+phy+mat;
    percentage=total/500*100;
    cgpa=percentage*0.9/10;
    printf("%f %f %f",total,percentage,cgpa);
    if(cgpa>6)
    {
        printf("you are eligiable for the placements");
    }
    else
    {
        printf("you are not eligiable for place ments");
        
    }

    return 0;
}

