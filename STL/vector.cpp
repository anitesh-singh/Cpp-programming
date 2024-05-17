// STL vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;    //initialization with capacity and size 0
    //after every insertion the vector double its size for extra memory
    cout<<"capacity- "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity- "<<v.capacity()<<endl;
    v.push_back(3);  
    cout<<"capacity- "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"capacity- "<<v.capacity()<<endl;
    cout<<"before pop operation"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    //pop operation the last inserted element will get pop out
    v.pop_back();
    cout<<"after pop operation"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    //front and back, at
    cout<<"front "<<v.front()<<endl;
    cout<<"end "<<v.back()<<endl;
    cout<<"element at index 1 "<<v.at(1)<<endl;

    // to copy v in a
    vector<int> a(v);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    
    //initializing with size(5 is size and initializing every element as 1)
    vector<int> x(5,1);
    for(int i:x){
        cout<<i<<" ";
    } cout<<endl;

    //clear the vector the size become zero but capacity remains same
    v.clear();
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"size of cleared vector "<<v.size()<<endl;
    cout<<"capacity of cleared vector "<<v.capacity()<<endl;

    //shrinktofit
    //.begin
    return 0;
}