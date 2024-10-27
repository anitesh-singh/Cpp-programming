//stringstream
//header file <sstream>
//to convert datatypes into strings(using stringstream)
/*#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    int num=22;
    // to_string(num); //converting diffirent datatypes to string
    string str;
    stringstream ss;
    ss<<num;  //insertion operation,
    str = ss.str();
    cout<<str;
}*/

//string to int (using stringstream)
/*#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string str="22";
    int num;
    stringstream ss; //SS is an stringstream object and it cannot be printed, so the value inside it is assinged to a varible and then it is printed
    ss<<str;  //insertion operation
    ss>>num;  //excertion operation, means the values which are there in ss in now input in num in integer form
    cout<<num+1<<endl;
}*/

//to_string() and stoi()
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="2";
    string str2="2";
    int len=stoi(str+str2);  //string to integer conversion stoi is used and string string concatination is done under braces
    cout<<len;
}*/

//concatination  (str1 + str2) 
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    int num=22;
    string str="22";
    cout<<num+1<<endl;
    cout<<str+'1'<<endl;
}*/

//reverse using stl
/*#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str="abcd";
    reverse(str.begin(),str.end());
    cout<<str;
}*/

//string is an array of characters
/*#include<iostream>
#include<string>

using namespace std;

int main(){
    string str="abcd";
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<" ";
    }
}*/


//usage of getline()
//as string can only take input as a single word if spaces comes the string gets terminated so to get a line or sentence as an input getline is used
#include<iostream>
#include<string>
#include<cstdio>
// #include<cstring>
using namespace std;

int main(){
    string str;
    // getline(cin,str);
    scanf("%[^\n]s",str);
    printf("%s",str);
}