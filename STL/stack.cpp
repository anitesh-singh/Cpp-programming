//container adapter 
//stack
// last in first out , imagine a stack of plate
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("anitesh");
    s.push("kumar");
    s.push("singh");                //as only push and pop can be performed the last element in will be taken out first
    cout<<"top element "<<s.top()<<endl; 
    s.pop();
    cout<<"top element "<<s.top()<<endl; 
    s.pop();
    cout<<"top element "<<s.top()<<endl; 
    s.pop();
    cout<<"size of the array "<<s.size()<<endl;
    cout<<"is empty "<<s.empty()<<endl;
    return 0;
}