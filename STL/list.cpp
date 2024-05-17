// list in stl is doubly list
//we have to traverse the entire list to search for an array
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(3);
    l.push_back(8);
    l.push_front(6);
    l.push_front(7);
    for (int i:l){
        cout<<i<<" ";

    }cout<<endl;

    l.pop_back();
    l.pop_front();
    for (int i:l){
        cout<<i<<" ";

    }cout<<endl;

    l.erase(l.begin());
    for (int i:l){
        cout<<i<<" ";

    }cout<<endl;

    return 0;
}