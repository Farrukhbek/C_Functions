#include <stdio.h>
#include <stdlib.h>

int max1, max2;
int N;
int x=1,y=1,z=1;
int add (int x, int y)
{
    int z = x+y;
    return z;
}
int sum(int w)
{
    int t;
    t = w*(w+1)/2;
    return t;
}

void print_row1( int x )
{
    int a;
    for (a=0; a < x; a++)
{
    printf("%d", x);
}
}
void print_row2( int x )
{
    int a;
    printf("\n%d", x);
    for(a=0;a < x-2; a++)
    {
        printf(" ");
    }
    printf("%d\n", x);
    printf("%d", x);
    for(a=0;a < x-2; a++)
    {
        printf(" ");
    }
    printf("%d\n", x);
}

int print_triangle(int x)
{
    for (int a = 1; a<=x; a++){
        for (int b=1; b<=a; b++)
            {printf("*");}
    printf("\n");}
}

int func(int x)
{
   int f;
   f = 2*x*x - 5*x+1;
   return f;
}
int func1(int x, int a, int b,int c)
{

   int f;
   f = a*x*x + b*x+c;
   return f;
}
int die3(int s)
{
    if(s==N)
        printf("%d %d %d\n", x,y,z);
}

void die2(int s)
{
    for(z=1;z<=6;z++)
        die3(z+s);
}


void die1(int s)
{
    for(y=1;y<=6;y++)
    {
        die2(s+y);
    }
}






void update(int n)
{
    max2 = n > max2 ? n : max2;
    max2 = n > max1 ? max1 : max2;
    max1 = n> max1 ? n : max1;

}

void Problem1()
{
    int a=0,b=1,c,n;
    scanf("%d", &n);
    c = add(a,b);
    for (a=2; a<=n; a++)
    {
        c+=a;
    }
    printf("%d", c);
}

void Problem2()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", sum(b) - sum(a) + a);

}

void Problem3()
{
    int x,a,m;
    scanf("%d", &x);
    for ( a=2, m=1; a<=x; ++a)
    {
        m +=sum(a);
    }
    printf("%d", m);
}

void Problem4()
{
    int n;
    scanf("%d", &n);
    print_row1(n);
    print_row2(n);
    print_row1(n);
}

void Problem5()
{
    int n;
    while(1)
    {
        scanf("%d", &n);
        if( n>0 ){
            print_triangle(n);
        }
        else
            break;
    }
}

void Problem6()
{
    int t;
    scanf("%d", &t);
    printf("%d", func(t));
}

void Problem7()
{
    int x,a,b,c;
    scanf("%d %d %d %d", &x,&a,&b,&c);
    printf("%d",func1(x,a,b,c));
}

void Problem8()
{
    int x,a,b,c,q,w,e;
    scanf("%d %d %d %d %d %d %d", &x, &a, &b, &c,&q,&w,&e);
    printf("%d", func1(func1(x,a,b,c),q,w,e));
}

void Problem9()
{
    int n;
    scanf(" %d", &n);
    max1 = max2 = n;

    while(1)
    {
        scanf("%d", &n);
        if(n)
            update(n);
        else
            break;
    }

    printf("%d %d", max1, max2);
}

void Problem10()
{
     scanf(" %d", &N);
	for(x=1;x<=6;x++)
	    die1(x);
}

int main()
{
    int n;
    while(1)
   {
       scanf("%d", &n);
       switch(n)
       {
           case 1: Problem1();break;
           case 2: Problem2();break;
           case 3: Problem3();break;
           case 4: Problem4();break;
           case 5: Problem5();break;
           case 6: Problem6();break;
           case 7: Problem7();break;
           case 8: Problem8();break;
           case 9: Problem9();break;
           case 10: Problem10();break;
       }

    }
    return 0;
}

