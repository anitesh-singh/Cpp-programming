//nCr
/*#include<iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}
//called function by main
int nCr(int n, int r){
    int num =factorial(n);
    int deno =factorial(r)*factorial(n-r);
    return num/deno;
}
//calling function 
int main()
{
    int a,b;
    cin>>a>>b;
    //function call
    int ans=nCr(a,b);
    cout<<ans<<endl;
    return 0;
}*/

//ap=(3*n+7)
/*#include<iostream>
using namespace std;
int ap(int n){
    int ans=(3*n+7);
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int ans=ap(n);
    cout<<ans<<endl;
    return 0;
}*/

//total number of set bits in a&b
/*#include<iostream>
using namespace std;
int setbit(int a,int b){
    int acount=0,bcount=0;
    while(a!=0,b!=0){
        if(a&1){acount++;}
        if(b&1){bcount++;}
        a=a>>1;
        b=b>>1;
    }
    int total=acount+bcount;
    return total;
}
int main()
{
    int a,b;
    cout<<"enter the value of a and b:"<<endl;
    cin>>a>>b;
    int ans=setbit(a,b);
    cout<<"total number of set bit (1) is:"<<ans<<endl;
    return 0;
}*/

//fibnacci series return nth term
/*#include<iostream>
using namespace std;

int fibo(int n){
    int sum;
    if(n==1) 
        {return 0;}
    if (n==2)
    {return 1;}
    else{
    int a=0,b=1;
    for(int i=2;i<n;i++){   
        sum=a+b;
        a=b;
        b=sum;
        // cout<<sum<<endl;
    }
    return sum;
    }
}
int main()
{
    int n;
    cout<<"enter the term which you want the corresponding fibonacci number:"<<endl;
    cin>>n;
    int ans=fibo(n);
    cout<<ans<<endl;
    return 0;
}*/

