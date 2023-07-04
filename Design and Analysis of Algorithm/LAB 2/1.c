#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

int approach1Counter = 0;
int approach2Counter = 0;
int approach3Counter = 0;

void resetCounter(){
     approach1Counter = 0;
     approach2Counter = 0;
     approach3Counter = 0;
}

bool approach1 (int n){
    int count = 0, num = n-1; approach1Counter++;

    while(n%num != 0 && num >=1){
        num--;
        approach1Counter++;
    }

    if (num==1){
        approach1Counter++;
        return true;
    }

    else{
        approach1Counter++;
        return false;
    }

}

bool approach2 (int n){
    int count = 0, num = n/2; approach2Counter++;

    while(n%num != 0 && num >=1){
        num--;
        approach2Counter++;
    }

    if (num==1){
        approach2Counter++;
        return true;
    }

    else{
        approach2Counter++;
        return false;
    }

}

bool approach3 (int num){

    if(num<2){
        approach3Counter++;
        return false;
    }

    if(num==2){
        approach3Counter++;
        return true;
    }

    int count = 0;
    for( int i=2 ; i<num/2; ++i){
        if(num%i == 0){
            count++;
            approach3Counter++;
            break;
        }
        else
          approach3Counter++;
    }

    if(count>0)
       return false;
    else
       return true;
}

void main(){

    printf("Enter number \n");
    int arr[10];
    for (int i=0; i<10; i++){
        scanf("%d",&arr[i]);
    }

    printf("\t\tTime\tTaken\tBy\t\t\n");
    printf("S.No.\tInput\tAlgo-1\tAlgo-2\tAlgo-3\tResult\t\tFastest\n\n");

    char result[10];

    for (int i=0; i<10; i++){

        bool res = approach1(arr[i]);
        approach2(arr[i]);
        approach3(arr[i]);

        if (approach1Counter < approach2Counter && approach1Counter < approach3Counter ){
            strcpy(result,"algo-1");
        }
        else if(approach2Counter < approach3Counter){
            strcpy(result,"algo-2");
        }
        else{
            strcpy(result,"algo-3");
        }
        printf("%d\t%d\t%d\t%d\t%d\t%s\t%s\n",i+1,arr[i],approach1Counter,approach2Counter,approach3Counter,res?"is prime":"not prime",result);
        resetCounter();
    }

}



