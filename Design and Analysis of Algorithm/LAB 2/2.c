#include<stdio.h>
#include<string.h>

int count1 = 0;
int count2 = 0;
int count3 = 0;

void resetCounter(){
    count1 = 0;
    count2 = 0;
    count3 = 0;
}

int euclid (int a, int b){
    count1++;
    if(a==0){
       return b;
    }
    return euclid(b%a,a);
}

int cic (int a, int b, int t){
    count2++;
    if( a%t ==0 && b%t ==0){
        return t;
    }
    else {
         return cic (a,b,t-1);
    }
}
      

int middleSchool(int n1, int n2){
    int gcd;
    for(int i=1; i<=n1 && i<=n2; ++i){
        count3++;
        if(n1%i == 0 && n2%i == 0){
              gcd = i;
        }         
    }
    return gcd;
}

void main(){

    int arr[12];
    for(int i= 0; i<12; i++){
         scanf("%d",&arr[i]);
    }
       
    char result[12];
    printf("S.No\t     Input\tEuclid\tCIC\tMid Sch\tGCD\tFastest\n");
    printf("--------------------------------------------------------------------\n");

    for(int i=0, j=0; i<12; i+=2){
        int gcd1 = euclid(arr[i],arr[i+1]);
        int gcd2 = cic(arr[i], arr[i+1],arr[i] > arr[i+1] ? arr[i+1]:arr[i]);
        int gcd3 = middleSchool(arr[i],arr[i+1]);
        if(count1<count2 && count1<count3){
             strcpy(result,"Euclid");
        }
            
        else if(count2<count3){
            strcpy(result,"CIC");
        }
            
        else{
            strcpy(result,"Mid Sch");
        }
            
        printf("%d\t(%d,\t%d)\t%d\t%d\t%d\t%d\t%s\n",++j,arr[i],arr[i+1],count1,count2,count3,gcd1,result);

        resetCounter();
    }
}