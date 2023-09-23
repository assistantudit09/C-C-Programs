#include<stdio.h>

    int main()
    {
        int marks;
    printf("enter your marks=\n");
    scanf("%d",&marks);
    {
        if(marks==100)
        {
            printf("genius\n");
        }
        else if(marks>=90&&marks<100)
        {
            printf("outstanding\n");
        }else
        {
            printf("fail\n");
        }

    }
    return 0;
    }
