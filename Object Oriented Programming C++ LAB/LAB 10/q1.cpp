 #include<iostream>
using namespace std;

template<class T>
class Numbers
{
   public:
      T GetMax(T arr[], int n)
      {
        T max=arr[0];
           for(int i=1;i<=n;i++)
           {
            if(arr[i]>max)
              {
           max=arr[i];
            }
            }
             return max;
     }

         T GetMin(T arr[], int n)
                 {
               T min=arr[0];
              for(int i=1;i<=n;i++)
              {
              if(arr[i]<min)
             {
           min=arr[i];
              }
                }
            return min;
          }

          T GetTotal(T arr[], int n)
          {
           T sum=0;
           for(int i=0;i<=n;i++)
           {
            sum=sum+arr[i];
           }
          return sum;
          }

        T GetAvg(T arr[], int n)
        {
  T sum=0, avg;
       for(int i=0;i<=n;i++)
     {
     sum=sum+arr[i];
    }
    avg=sum/n;
      return avg;
        }
      };

int main()
{
Numbers<int> num;
int n;
cout<<"Enter size of array"<<endl;
cin>>n;
int arr[n];
cout<<"Enter elements into array"<<endl;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int max=num.GetMax(arr,n);
int min=num.GetMin(arr,n);
int total=num.GetTotal(arr,n);
int avg=num.GetAvg(arr,n);

cout<<"Max : "<<max<<endl;
cout<<"Min : "<<min<<endl;
cout<<"Total :  "<<total<<endl;
cout<<"Average : "<<avg<<endl;
}

