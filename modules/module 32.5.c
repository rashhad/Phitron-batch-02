#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    solve5();
    return 0;
}

void solve5(void)
{
    int n; scanf("%d",&n);
    printf("%d",sum_nth_num(n));
}
void solve4(void)
{
    int n; scanf("%d",&n);
    print_n_deascending(n);
}
void solve3(void)
{
    int n; scanf("%d",&n);
    print_n_ascending(n);
}
void solve2(void)
{
    int n; scanf("%d",&n);
    int a[n];
    int i = 0;
    while(i<n)
    {
        scanf("%d",a+i);
        i++;
    }
    printf("%d",last_digit_sum(a,n));
}
void solve1(void)
{
    int n, m;
    scanf("%d%d",&n,&m);
    printf("%d",expo(n,m));
}

int expo(int n, int m)
{
    if(m>0)
        return n*expo(n,m-1);
    else return 1;
}

int last_digit_sum(int a[], int index)
{
    if(index >= 0)
        return a[index-1]%10 + last_digit_sum(a,index -1);
    else return 0;
}

void print_n_deascending(int n)
{
    printf("%d ",n);
    if(n>1)
        print_n_ascending(n-1);
}
void print_n_ascending(int n)
{
    if(n>1)
        print_n_ascending(n-1);
    printf("%d ",n);
}

int sum_nth_num(int n)
{
    if(n>0)
        return sum_nth_num(n-1) + n;
    return 0;
}
