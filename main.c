#include <stdio.h>
#include <conio.h>

void main()
{
    int m1,n1,m2,n2;
    printf("Enter the number of rows of the first matrix: \n");
    scanf("%d",&m1);
    printf("Enter the number of columns of the first matrix: \n");
    scanf("%d",&n1);
    int a[m1][n1];
    printf("Enter elements of the first matrix: \n");
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Elements of the first matrix are: \n");
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the number of rows of the second matrix: \n");
    scanf("%d",&m2);
    printf("Enter the number of columns of the second matrix: \n");
    scanf("%d",&n2);
    int b[m2][n2];
    printf("Enter elements of the second matrix: \n");
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Elements of the second matrix are: \n");
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    printf("Elements of the third matrix containing the product of first and second matrix are: \n");
    int m3,n3;
    m3=m1;
    n3=n2;
    int c[m3][n3];
    for(int i=0;i<m3;i++)
    {
        for(int j=0;j<n3;j++)
        {
            c[i][j]=0;
            for(int k=0;k<n1;k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    for(int i=0;i<m3;i++)
    {
        for(int j=0;j<n3;j++)
        {
            printf("%8d",c[i][j]);
        }
        printf("\n");
    }
}
