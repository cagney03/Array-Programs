//To display the maxium and minium element in array.
#include<iostream>
using namespace std;
int maxx(int arr[],int size){
int max=arr[0];
for (int i = 0; i < size; i++)
{
    if(max<arr[i]){
        max=arr[i];
    }
}
return max;
}
int minn(int arr[],int size){
    int min=arr[0];
    for (int i = 0; i < size; i++)
    {
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;   
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the value of the element arr["<<i<<"]";
        cin>>arr[i];
    }
    cout<<"To display the element of the array ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    int max=maxx(arr,n);
    int min=minn(arr,n);

    cout<<"\nMaxium value in the array is:"<<max;
    cout<<"\nMinium value in the array is:"<<min;
    return 0;
}