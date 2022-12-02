#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int nth_element(int n);
void print(int n);
int nth_sum(int n);
void is_cost(char a[], int len);
int find_nth_lar(int a[],int sz,int n);
int find_nth_sm(int a[],int n);
void print_array(int a[], int n);
void sort(int a[],int n);
void solve1(void);
void solve2(void);
void solve3(void);
void solve5(void);
void solve4(void);
void solve6(void);
void solve7(void);
void solve8(void);
void solve9(void);
char* pr(int num);
int count_except(int sz, int ar[],int k);
int main()
{
//    solve1();
//    solve2();
//    solve3();
//    solve4();
//    solve5();
//    solve6();
//    solve7();
//    solve8();
    solve9();
    return 0;
}
void solve9(void)
{
    int t; scanf("%d",&t);
    while(t--)
    {
        int m,n,o,p;
        scanf("%d%d%d%d",&m,&n,&o,&p);
        if((m>=o&&m<=p) || (o<=n&&o>=m))
            m>=o?printf("%d",m):printf("%d",o);
        else printf("%d",m+o);
        printf("\n");
    }
}
void solve8(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        a[0]=2;
        for(int i =1; i<n; i++)
        {
            a[i]=a[i-1];
            a[i]++;
            while(a[i]%a[i-1]==0)
                a[i]++;
        }
        print_array(a,n);
        printf("\n");
    }
}
void solve7(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",nth_element(n));
    }
}

int nth_element(int n)
{
    int k=0;
    for(int i=0; i<n; i++)
    {
        k++;
        while(k%3==0 || k%10==3)
            k++;
    }
    return k;
}
void solve6(void)
{
    int a, b, c,* p=&a, *q=&b, *r=&c;
    scanf("%d%d%d",p,q,r);
    printf("%d",*p+*q+*r);
    return;
}
void solve5(void)
{
    int n;
    scanf("%d",&n);
    printf("%d",nth_sum(n));
    return;
}
void solve4(void)
{
    int n;
    scanf("%d",&n);
    print(n);
    return;
}
void solve3(void)
{
    char a[50];
    scanf("%s",a);
    is_cost(a,strlen(a));
    return;
}
void solve2(void)
{
    //finding kth element;
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i = 0; i<n; i++)
        scanf("%d",&num[i]);
    sort(num,n);
    int k;
    scanf("%d",&k);
    printf("%d%s largest element is: %d ",k,pr(k), find_nth_lar(num,n,k));
    printf("\n%d%s smallest element is: %d ",k,pr(k), find_nth_sm(num,k));
    return;
}
void solve1(void)
{
    //counting total array element except... ;
    int n;
    scanf("%d",&n);

    int a[n];
    while(n--)
    {
        scanf("%d",&a[n]);
    }
    int k;
    scanf("%d", &k);
    printf("%d",count_except(sizeof(a)/sizeof(a[0]),a,k));
    return;
}
int count_except(int sz, int ar[],int k)
{
    int count=0;
    for(int i =0; i<sz; i++)
        if(ar[i]!=k)
            count++;
    return count;
}

void sort(int a[],int n)
{
    int select;
    for(int i = 1; i<n; i++)
    {
        select=a[i];
        int j = i-1;
        while(select<a[j]&&j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        if(j<0)
            a[++j]=select;
        else
            a[j+1]=select;
    }
}

void print_array(int a[], int n)
{
    for(int i = 0; i<n; i++)
        printf("%d ",a[i]);
}
int find_nth_sm(int a[],int n)
{
    return a[n-1];
}
int find_nth_lar(int a[],int sz,int n)
{
    return a[sz-n];
}

char* pr(int num)
{
    if(num%10==3)
        return "rd";
    else if(num%10==2)
        return "nd";
    else if(num%10==1)
        return "st";
    return "th";
}

void is_cost(char a[], int len)
{
    int sum=0;
    for(int i =0; i<len; i++)
        sum+=a[i]-'a'+1;
    while(sum%2==0)
        sum/=2;
    printf("%s",sum>1?"No":"Yes");
}

void print(int n)
{
    printf("%d",n);
    if(n>1)
        print(n-1);
    printf("%d",n);
}

int nth_sum(int n)
{
    if(n>1)
        return n+nth_sum(n-1);
    return 1;
}
