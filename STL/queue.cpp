//first in first out , imagine a line, the first one goes comes out first
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string>s;
    s.push("anitesh");
    s.push("kumar");
    s.push("singh");
    cout<<"first element "<<s.front()<<endl;
    cout<<"last element "<<s.back()<<endl;
    s.pop();
    cout<<"first element "<<s.front()<<endl;
    cout<<"size of queue "<<s.size()<<endl;
    return 0;
}
