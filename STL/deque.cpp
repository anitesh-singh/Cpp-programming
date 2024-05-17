//deque (uses dynamic memory location)

#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(2);
    d.push_back(3);
    d.push_front(4); //pushing the element from the front
    d.push_back(8);
    // array before pop
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();   //pop from back
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    d.pop_front();  //pop from front
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.erase(d.begin(), d.begin()+1); //first eklement

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}