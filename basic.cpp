#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;

    cout<<"enter the size of first array"<<endl;
    cin>>n;
    cout<<"enter the size of second array"<<endl;
    cin>>m;
    int arr1[n],arr2[m],arr3[n+m];
    for(i=0;i<n;i++)
    {
        cout<<"enter the elements of the first array"<<i+1<< " : "<<endl;
        cin>>arr1[i];
    }
    for(j=0;j<m;j++)
    {
        cout<<"enter the elements of the second array"<<j+1<< " : "<<endl;
        cin>>arr2[j];
    }
    for(i=0;i<n;i++)
     {

         arr3[i]=arr1[i];
       
     }
     for(j=0;j<m;j++)
     {
         arr3[n+j]=arr2[j];
     }
    cout<<"array after merging"<<endl;

    for(i=0;i<(n+m);i++)
    {
        cout<<"value of an array at"<<i+1<<":"<<arr3[i]<<endl;
    }

     return 0;

}

