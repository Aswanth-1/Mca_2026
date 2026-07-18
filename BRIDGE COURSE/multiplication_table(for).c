5. Print the multiplication table of the given number from 1 to 10.
Example
If the given number is 6
1*6=6
2*6=12
3*6=18
...
.....
10*6=60

#include<stdio.h>
int main()
 {
    int n,i,x;
    printf("enter a number from 1-10: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        x=i*n;
        printf("%d x %d =%d\n",i,n,x);
    }
    return 0;
}
