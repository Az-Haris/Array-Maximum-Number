#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int array[100], n, max, i;

    printf("How many number You want to input? = ");
    scanf("%d",&n);
    printf("Enter the Values : ");

    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    max=array[0];

    for(i=1; i<n; i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    printf("Maximum Number is = %d", max);



    getch();
    return 0;
}
