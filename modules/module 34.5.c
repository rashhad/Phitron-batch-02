#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    solve6();
    return 0;
}

void solve3(void)
{
    FILE* input, *output;
    input = fopen("input.txt","r");
    if(input==NULL)
    {
        printf("No File found input.txt");
        exit(1);
    }
    output = fopen("output.txt","w");
    int t;
    fscanf(input,"%d",&t);
    while(t--)
    {
        int start, end; fscanf(input, "%d", &start);
        end = -start;
        if(start>=0)
            while(start>=end)
            {
                fprintf(output,"%d ",start);
                start--;
            }
        else while(start<=end)
        {
            fprintf(output,"%d ", start);
            start++;
        }
        fprintf(output, "\n");
    }
    fclose(input);
    fclose(output);
}
void solve2(void)
{
    FILE* input, *output;
    input = fopen("input.txt","r");
    if(input==NULL)
    {
        printf("No File found input.txt");
        exit(1);
    }
    output = fopen("output.txt","w");
    int n;
    fscanf(input,"%d",&n);
    int i=1;
    while(i<=n)
    {
        fprintf(output, "%d ",i);
        i++;
    }
    fclose(input);
    fclose(output);
}

void solve4(void)
{
    FILE* input, *output;
    input = fopen("input.txt","r");
    if(input==NULL)
    {
        printf("No File found input.txt");
        exit(1);
    }
    output = fopen("output.txt","w");
    int n,m, sum=0;
    fscanf(input,"%d",&n);
    while(n--)
    {
        fscanf(input, "%d", &m);
        sum+=m%10;
    }
    fprintf(output, "%d ",sum);
    fclose(input);
    fclose(output);
}

void solve5(void)
{
    FILE* input, *output;
    input = fopen("input.txt","r");
    if(input==NULL)
    {
        printf("No File found input.txt");
        exit(1);    }
    output = fopen("output.txt","w");
    int n;
    fscanf(input,"%d",&n);
    for(int i = 0; i<n; i++)
    {
        for(int j = i; j<n-1; j++)
            fprintf(output," ");
        for(int j = 0; j<n; j++)
            fprintf(output,"#");
        fprintf(output,"\n");

    }
    fclose(input);
    fclose(output);
}

void solve6(void)
{
    FILE* input, *output;
    input = fopen("input.txt","r");
    if(input==NULL)
    {
        printf("No File found input.txt");
        exit(1);    }
    output = fopen("output.txt","a");
    int year;
    fscanf(input,"%d",&year);
    fprintf(output, "%d -> ",year);
    if(year%400==0 || (year%4==0 && year%100!=0))
        fprintf(output, "Yes");
    else
        fprintf(output, "No");
    fprintf(output, "\n");
    fclose(input);
    fclose(output);
}

void solve1(void)
{
    FILE* input, *output;
    input = fopen("input.txt","r");
    if(input==NULL)
    {
        printf("No File found input.txt");
        exit(1);    }
    output = fopen("output.txt","w");
    int n;
    while(fscanf(input,"%d",&n)!=EOF)
        fprintf(output, "%d ",n);
    fclose(input);
    fclose(output);
}

