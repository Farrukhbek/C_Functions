#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void problem_1()
{
    int x[10],a,b,c,d=0,e,f;
    for(a=0; a<10; a++)
    {scanf("%d", &x[a]);}
    printf("Enter the number of times to rotate:\n");
    scanf("%d", &b);
    for(c=1; c<=10; c++)
    {   d = x[c];
        x[c] = x[abs(c-b)];
        x[abs(c-b)] = d; }

    printf("\n");
    for(e=0;e<10; e++)
    {   printf("%d", x[e]);
        printf("  "); }
}
void problem_2()
{
    int x[100],size_of_array, a,b,c,count1=0;
    printf("Enter the size of the array:\n");
    scanf("%d", &size_of_array);
    for(a=0;a<size_of_array; a++)
    {
        scanf("%d", &x[a]);
    }
    for(b=0; b<size_of_array; b++)
    {
        for(c=b+1; c<size_of_array; c++)
        {
            if(x[b] == x[c])
            {
              count1++;
              break;
            }
        }
    }
    printf("\nDuplicate elements are %d\n", count1);
}
void problem_3()
{
    int a,b,c,d,count1=1,size_of_array,x[100], freq[100];

    printf("Enter the size of the array:\n");
    scanf("%d", &size_of_array);

    for(a=0;a<size_of_array; a++)
    {
        scanf("%d", &x[a]);
        freq[a] = -1;
    }
    for(b=0; b<=size_of_array; b++)
    {
        count1 = 1;
        for(c=b+1; c<=size_of_array; c++)
        {
            if(x[b] == x[c])
            {
                count1++;
                freq[c] = 0;
            }
        }
    if(freq[b] != 0)
    {
        freq[b] = count1;
    }
    }
    for(d=0; d < size_of_array; d++)
    {
        if(freq[d] != 0)
        {
        printf("Frequency of %d is:%d\n",x[d],freq[d]);
        printf("\n");
        }
    }

}
int main()
{
    int n;
    while(1)
    {
        scanf("%d", &n);
        switch (n)
        {
            case 1: problem_1(); break;
            case 2: problem_2(); break;
            case 3: problem_3();break;
            }

    }
    return 0;
}
