 #include<stdio.h>
int main(){
	FILE *fp;
	char ch;
	int count=0;
	fp =fopen("data4.txt","r");
	while((ch=fgetc(fp))!= EOF){
		if(ch=='a'||ch=='A'){	
		count++;
	}
	}
    printf("The number of character 'a' or 'A' is :: %d",count);
    fclose(fp);
	return 0;
}
