#include <stdio.h>
#include <stdlib.h>
/*int c;
void add (int x, int y)
{
c = x + y;
printf("add: c = %d\n", c);}*/

int m;
int a,b;
int divq (int a, int b)
{
    int c = a/b;
    m = a%b;
    return c;

}

void swap()
{
    int z = a;
    a=b;
    b = z;
}

int main()
{
    scanf("%d %d", &a, &b);
    swap();
    printf("a = %d \nb = %d", a, b);


    return 0;
}
