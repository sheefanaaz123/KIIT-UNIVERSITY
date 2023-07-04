 #include<stdio.h>
#include<string.h>
int main(){
	
    char string[100];
    int i,t=1,length;
    
    printf("Enter the string from the keyboard :\n");
    gets(string);
    length = strlen(string);
    printf("\n%d\n",length);
    for(i=0;i < length ;i++){
        if(string[i]!=string[length-i-1]){
            t = 0;
        break;
   }
}
    
    if (t==1) {
        printf("String satisfy palindrome property.");
        }    
    else {
        printf("String does not satisy palindrome property.");
    }
    return 0;
} 
    
