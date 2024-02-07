/*even or odd*/
#include<stdio.h>
int evenorodd();
void main()
{
    int number;
    number=evenorodd();
    if(number==2)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
}
int evenorodd()
{
    int n;
    printf("Input the number : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
/*output:
Input the number : 345
The number is odd
*/