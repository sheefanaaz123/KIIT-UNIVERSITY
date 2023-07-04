#include<iostream>
#include<stdlib.h>

using namespace std;
class occurance
{
    public:
    int max=0,pos=0,j=0,a[20],count=0,i,n,*num;
    void enter()
    {
        cout<<"Enter the total number of elements in the set: ";
        cin>>n;
        num=(int *)malloc(n * sizeof(double));
        cout<<"enter the number: ";
        for(i=1;i<=n;i++)
        {  
	        cin>>num[i];
        }
 		cout<<"Choose a position in the array from '0' to "<<n<<": ";
        cin>>pos;
        if (pos<=n)
        {
            for(i=1;i<=n;i++)
            {
            if(num[i]==num[pos])
		    {
                count++;
                for(j;j<count;j++)
                {
                    a[j]=i;
                }
   		    }
            }
            cout<<"The entered position number is "<<num[pos]<<".\nThe occurrence of "<<num[pos]<<" is "<<count<<endl;    
        }
        else
        {
            cout<<"The entered position doesnot exist in the allocated memory, please try again\n";
        }
        cout<<"The positions at which the entered position numbers are present are: ";
        for (j=0;j<count;j++)
        {
            cout<<a[j]<<" ";
        }
    }
};

int main()
{
	occurance o;
    o.enter();
    return 0;
}
