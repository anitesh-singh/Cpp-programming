//in set data structure, the stored element are unique i.e. if 5 is stored 5 times it is stored only 1 times
//impletation is done using bst, we cant modify an entered element
//the returned element are in sorted order
// the unorder set, set is slower than the the unorder set, in unorder set element are stored in unordered way 
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;
    s.insert(1);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    for (int i:s){
        cout<<i<<" ";
    }cout<<endl;
     
   set <int>:: iterator itr=s.begin();   //erasing by getting the begining iterator
    s.erase(itr++);
    for (int i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"hello 3 hai?? "<<s.count(3)<<endl; //finding is 5 is there in the array
    
    set<int>::iterator it= s.find(5);          //find the iterator of 5
    for (auto i=it; i!=s.end();i++){           //printing the number from 5 till end
        cout<<*i<<" ";
    }cout<<endl;
    return 0;
}
