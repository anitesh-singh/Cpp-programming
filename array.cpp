// initialising entire array with a single value
// 0 can be initialised to an entire array by writing only 0 
/*#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i]=1;
        cout<<arr[i]<<" ";
    }
    
    return 0;
}*/

//maximum and minimum element of an array
//predefined function for finding max and min 
//max=max(max, arr[i]);
//min=min(min, arr[i]);
/*#include<iostream>
using namespace std;

int MIN(int arr[],int size){
    int min=arr[0];                  //min=INT_MAX
    for (int i = 0; i < size; i++)
    {
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int MAX(int arr[], int size){
    int max=arr[0];                 //max=INT_MIN
    for (int i = 0; i < size; i++)
    {
        if (max<arr[i]){
            max=arr[i];
        }
    }
    return max;
    
}

int main()
{
    int arr[]={4,12,8,19};
    int max= MAX(arr,4);
    int min= MIN(arr,4);
    cout<<"maximum element is:"<<max<<endl;
    cout<<"minimum element is:"<<min<<endl;
    return 0;
}*/

//print sum of elements of an array
/*#include<iostream>
using namespace std;
int SUM (int arr[], int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum=sum+ arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cout<<"enter size"<<endl; //bad practice
    cin>>size;
    cout<<"enter elements"<<endl;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int sum = SUM(arr,size);
    cout<<"sum of the elements is:"<<sum<<endl;
    return 0;
}*/

//reverse an array (not printing in reverse order :) )
/*#include<iostream>
using namespace std;
void reverse (int arr[], int size){
    int start=0, end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);  //inbuilt function for swap
        start++;
        end--;
    }

}
void printarray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr1[5]={2,4,5,1,6};
    int arr2[6]={2,4,5,1,6,-2};
    reverse(arr1,5);
    reverse(arr2,6);
    printarray(arr1,5);
    printarray(arr2,6);
    return 0;
}*/

