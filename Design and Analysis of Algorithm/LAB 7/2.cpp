#include<bits/stdc++.h>
 using namespace std;
 
 int countPlatforms(int n,int arr[],int dep[])
 {
    sort(arr,arr+n);
    sort(dep,dep+n);
 
    int ans=1;
    int count=1;
    int i=1,j=0;
    while(i<n && j<n)
    {
        if(arr[i]<=dep[j]) 
        {
            count++;
            i++;
        }
        else 
        {
            count--;
            j++;
        }
        ans=max(ans,count); 
    }
    return ans;
 }
 
 int main()
 {
    int arr[]={900, 940, 950, 1100,1500,1800};
    int dep[]={920,1200,1120,1130,1900,2000};
    int n=sizeof(dep)/sizeof(dep[0]);
    cout<<"Minimum number of Platforms required "<<countPlatforms(n,arr,dep)<<endl;
 }




