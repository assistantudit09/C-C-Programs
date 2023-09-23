#include<stdio.h>
void main()
{
    int a,b,c;
    int ch;
    printf("enter two digits\n");
    scanf("%d %d",&a,&b);
    printf("enter choice\n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:c=b+a;
        printf("%d",c);
        break;
        case 2:c=b-a;
        printf("%d",c);
        break;
        case 3:c=b*a;
        printf("%d",c);
        break;
        case 4:c=b/c;
        printf("%d",c);
        break;
        default:
        printf("invalid\n");
        break;

    }

    return 0;
}
