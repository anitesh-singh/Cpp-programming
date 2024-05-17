//binary search
//condition of binary search, the array should be sorted
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    cout<<"finding 5--- "<<binary_search(v.begin(), v.end(), 5)<<endl;
    cout<<"finding 6--- "<<binary_search(v.begin(), v.end(), 6)<<endl;

    cout<<"lower bound-- "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"uper bound-- "<<upper_bound(v.begin(),v.end(),7)-v.begin()<<endl;

    int a=3,b=4;
    cout<<"Max: "<<max(a,b)<<" Min"<<min(a,b)<<endl;
    
    swap(a,b);
    cout<<a<<endl;
    
    string abc ="abcd";
    reverse(abc.begin(), abc.end());
    cout<<"reversed--"<<abc<<endl;

    rotate(v.begin(),v.begin()+1,v.end());    //v.begin()+1 how much element you want to rotate
    cout<<"rotate- "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());  //sort
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}