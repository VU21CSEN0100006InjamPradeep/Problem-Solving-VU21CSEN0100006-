#include <stdio.h>
int main()
{
 int a[10][10],b[10][10],row ,col,i,j;
 printf("Enter order of matrix :");
 scanf("%d %d",&row,&col);
 printf("Enter the elements of matrix a .\n");
 for(i=0;i<row;i++)
 {
 printf("ENter row :");
 for(j=0;j<col;j++)
 {
 scanf("%d",&a[i][j]);
 }
 }
 printf("Enter the elements of matrix b .\n");
 for(i=0;i<row;i++)
 {
 printf("ENter row :");
 for(j=0;j<col;j++)
 {
 scanf("%d",&b[i][j]);
 }
 }
 //Adding matrix
 printf("After adding the martrix : \n");
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 printf(" %d\t",a[i][j]+b[i][j]);
 }
 printf("\n");
 }
//subtracting matrix
 /*printf("After substraction the martrix : \n");
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 printf(" %d\t",a[i][j]-b[i][j]);
 }
 printf("\n");
 }*/
}
