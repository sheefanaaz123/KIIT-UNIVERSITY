#include<stdio.h>

int main()
{
	struct address{
	char phone[20];
	char city[20];
	int pin;
};
struct emp{
	char name[25];
	struct address adr;
};

struct emp e = {"ABC",87878,"nagpur",10};
printf("\nname = %s phone=%s",e.name,e.adr.phone);
printf("\ncity = %s pin=%d",e.adr.city,e.adr.pin);

    
    return 0;
}
