#include<stdio.h>

int main()
{
    int r1,r2,r3,voltage,rs;
    float is,t,rp,ip;
    printf("Enter the value of r1,r2,r3\n");
    scanf("%d %d %d",&r1,&r2,&r3);
    rs=r1+r2+r3;
    printf("The value of rs is %d\n",rs);
    printf("Enter the value of voltage\n");
    scanf("%d",&voltage);
    is=(float)voltage/rs;
    printf("The value of is is %f\n",is);
    t=(float)1/r1+(float)1/r2+(float)1/r3;
    rp=1/t;
    printf("The value of rp is %f\n",rp);
    ip=(float)voltage/rp;
    printf("The value of ip is %f",ip);
    
    return 0;
}



