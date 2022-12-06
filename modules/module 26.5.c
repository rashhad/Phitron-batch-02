#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

double circle_ar(int r);
int main()
{
    solve9();
    return 0;
}

void solve9(void)
{
    int t, n, m,b;
    scanf("%d",&t);
    while(t--)
    {
        int top;
        scanf("%d",&n);
        int a[n];
        for(int i = 0; i<n; i++)
            scanf("%d",&a[i]);
        scanf("%d",&m);
        top = 0;
        for(int i=0; i<m; i++)
        {
            scanf("%d",&b);
            top = (top+b)%n;
        }
        printf("%d\n",a[top]);
    }
}
void solve8(void)
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n%10==9)
            printf("%d\n",n/10+1);
        else
            printf("%d\n",n/10);
    }
}


void solve1(void)
{
    int x, y;
    int* px=&x, *py=&y;

    scanf("%d%d",px,py);
    printf("%.3f",(*px+*py)/2.0);
}
void solve2(void)
{
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i = 0; i<n; i++)
        scanf("%d",&a[i]);
    for(int i = 0; i<n-1; i++)
        for(int j = 0; j<n-1-i; j++)
            if(a[j]>a[j+1])
            {
                swapp(&a[j],&a[j+1]);
            }
    print_arr(a,n);
}

void solve3(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++)
        scanf("%d",&a[i]);
    print_arr(a,n);
}
void solve4(void)
{
    int n;
    scanf("%d",&n);
    printf("%lf sqm",circle_ar(n));
}
void solve5(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++)
        scanf("%d",&a[i]);
    printf("%d",sum_last_zero(a,n));
}

void solve6(void)
{
    char a[100];
    scanf("%s",&a);

    capitilize_even_char(a,strlen(a));
    printf("%s",a);
}
void swapp(int *x, int* y)
{
    int t;
    t = *x;
    *x=*y;
    *y=t;
}

void print_arr(int* arr,int size)
{
    for(int* ptr = arr; ptr<arr+size; ptr++)
        printf("%d ",*(ptr));
    printf("\n");
}

double circle_ar(int r)
{
    return 3.1416*r*r;
}

int sum_last_zero(int a[],int size)
{
    int summ=0;
    for(int i = 0; i<size; i++)
        if(a[i]%10==0)
            summ+=a[i];
    return summ;
}

void capitilize_even_char(char arr[], int len)
{
    for(int i = 0; i<len; i++)
        if(arr[i]%2==0)
            arr[i]-=32;
}
