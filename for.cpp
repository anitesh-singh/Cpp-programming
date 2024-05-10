//counting integers for till n numbers
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "enter the number till you want to count:"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<endl;
    }
    
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "enter the number till you want to count:"<<endl;
    cin>>n;
    int i = 1;
    for (; ; )
    {
        if(i<=n){
        cout<<i<<endl;
        }
        else{
            break; //if the condition becomes false break
        }
        i++;

    }
    
    return 0;
}*/

//initializing multiple variable 
/*#include<iostream>
using namespace std;
int main()
{
    for (int i = 0, b=1, c=2; i>=0 && b>=1 && c>=2; i--,b--,c--)   // in codition block this will also work i>=0, b>=1, c>=2 
    {
        cout<<i<<" "<<b<<" "<<c<<endl;
    }
    
    return 0;
}*/

//sum of n integers
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"enter the number of integers:"<<endl;
    cin>>n;
    int sum=0;
    for (int i = 1; i <=n; i++)
    {
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}*/

//fibonacci number
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number till you want to print the sequence:"<<endl;
    cin>>n;
    int a=0, b=1;
    cout<<a<<" "<<b<<" ";
    int sum=0;
    for (int i = 0; i <n; i++)
    {
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
    
    return 0;
}*/

//prime number
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number you want to check wheather it is a prime or not:"<<endl;
    cin>>n;
    int i;
    for ( i = 2; i <n;i++ )
    {
        if(n%i==0){
            cout<<"not prime"<<endl;
            break;
        }
        
    }
    if(i==n){
        cout<<"prime"<<endl;
    }
    
    return 0;
}*/

//using bool
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number you want to check wheather it is a prime or not:"<<endl;
    cin>>n;
    int i;
    bool isprime=1;  //1 means true
    for ( i = 2; i <n;i++ )
    {
        if(n%i==0){
           // cout<<"not prime"<<endl;
           isprime=0; //false
            break;
        }
        
    }
    if(isprime==0){
        cout<<"not prime"<<endl;
    }
    else{
        cout<<"prime"<<endl;
    }
    return 0;
}*/

//use of continue 
/*#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout<<"hii"<<endl;
        cout<<"hey"<<endl;
        continue;
        cout<<"ab to msg seen kr le"<<endl;
    }
    
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i <=15; i+=2)
    {
        cout<<i<<" ";
        if(i&1){
            continue;
        }
        i++;
    }
      
    return 0;
}*/

