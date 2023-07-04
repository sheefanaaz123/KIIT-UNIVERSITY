#include<stdio.h>
int main()
{   int i,j,count=0;
    char *p[5];
    char a[]="yudhistir";
    char b[]="bhim";
    char c[]="arjun";
    char d[]="nakul";
    char e[]="sahadev";
    p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;
    p[4]=e;
    for(i=0;i<5;i++)
    {
        for(j=0;p[i][j];j++)
        count+=p[i][j]=='a';
    }
    printf("The number of character 'a' present is %d",count);
   
    return 0;


}
