/*#include<iostream>   //iostreme header file includes cout function
using namespace std; // using std namespace 
int main(int argc, char const *argv[])
{
    cout<<"Namaste Duniya" << endl; // <<to display output, endl for next line (to move the cursor to next line) '\n'int single inverted comma after << next line also in string \n can be written

}*/

//data types and variables
/*#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=5;
    cout<<a<<endl;
    char ch='a'; //only one character can be entered in a single inverted comma i.e. 'ab' is wrong 
    cout<<ch<<endl;
    bool b=true;   //boolean true , false 0, 1 can be entered if it is true 1 is returned and false 0 is returned
    cout<<b<<endl;
    float f=1.34;
    cout<<f<<endl;
    int size=sizeof(a);
    cout<<"size of a is :"<<size<<endl;
    return 0;
}*/

//typecasting
/*#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a='a';    //the character string is converted to integer
    cout<<a<<endl;
    char ch=97;  //the integer number is converted to character
    cout<<ch<<endl;

    //what happens if we try to give a bigger value to than its storage value
    char ch1=123456;
    cout<<ch1<<endl;
    return 0;
}*/

//positive negative or zero (input integer and cindition checking)
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    if(n>0) cout<<"is positive"<<endl;
    if(n==0) cout<<"is equals to zero"<<endl;
    if(n<0) cout<<"is negative"<<endl;
    return 0;
}*/

//input char and check wheather it is a digit upper case or lower case
/*#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character"<<endl;
    cin>>ch;
    // int a=ch;
    if(ch>=48 && ch<=57) cout<<"ch is digit"<<endl;
    if(ch>=65 && ch<=90) cout<<"ch is uppercase"<<endl;
    if(ch>=97 && ch<=122) cout<<"ch is lowercase"<<endl;

}*/

//even or not
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(n%2==0){cout<<"even number"<<endl;}
    else{cout<<"odd number"<<endl;}
    return 0;
}*/

//prime or not
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin >>n;
    int i=2;           //till now i will have become 7 so that condition of the loop become false, 
    while(i<n){
        if(n==1){cout<<"not prime";}

        if (n%i==0){
            cout<<"not prime"<<endl;
            break;
        }
        else {
           i++;
           
        }
        
    }

    if(n==i){ cout<<"prime"<<endl;}
    return 0;
}*/


