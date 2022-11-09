/*write a program to print the pascal triangle uo the N row where N is an input to the program*/
#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter the number of rows:\n");
    scanf("%d",&row);
    for(i=1; i <= row; i++)
    {
        for(j=1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
