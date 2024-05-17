//map is a data structure where is data is stored in the form of key value, where key is pointing to a value, 
//2keys can point to a same value but a single key can't point to more than one value
//the returned values are in oredered way
#include<iostream>
using namespace std;
#include<map>
int main()
{
    map<int,string> m;
    m[1]="anitesh";
    m[8]="kumar";
    m[15]="singh";
    m.insert({5,"anu"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second;
        cout<<endl;
    }cout<<endl;

    cout<<"ani hai??"<<m.count(1)<<endl;

    auto it=m.find(8);    //returns iterator
    for(auto i=it; i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }

    return 0;
} 