//default priority is a heap
//first element is always greatest in max heap
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>max;   //max priority queue the first element will be greatest 
    priority_queue<int,vector<int>, greater<int>> min; //initializing min heap the first element is smallest
    max.push(2);
    max.push(4);
    max.push(0);
    max.push(8); 
    int n=max.size();            //assinging the sign to n as after the size of the array change and the iteration will change so we assing to a variable to itarite it for a fixed no. of times
    for (int i = 0; i <n; i++)
    {
        cout<<max.top()<<" ";        //the o/p is in descending order
        max.pop();                   //print krte jao aur element ko bahar nikalte jao
    }cout<<endl;
     
    min.push(9);
    min.push(3);
    min.push(7);
    min.push(2);
    int m=min.size();
    for (int i = 0; i < m; i++)
    {
        cout<<min.top()<<" ";       //the o/p is in ascending order
        min.pop();
    }cout<<endl;
    
    cout<<"is empty: "<<min.empty()<<endl;
    return 0;
}