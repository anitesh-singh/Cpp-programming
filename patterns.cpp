//pattern 1
/*#include<iostream>
using namespace std;
int main(){
    int i=0,n;
    cin>>n;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//pattern 2
/*#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j ;
            cout<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//pattern 3
/*#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1 ;  //5-1=4 4+1=5
            cout<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//pattern 4
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}*/

//pattern 5
/*#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}*/

//pattern 6
/*#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}*/

//pattern 7
/*#include<iostream>
using namespace std;
int main()
{
    int n,row=1,count=1;
    cin>>n;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<count<<" ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}*/

//pattern 8
/*#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cin>>n;
    
    while(row<=n){
        int value=row;
        int col=1;
        while(col<=row){
            cout<<value<<" ";
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}*/

//pattern 9

/*#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cin>>n;
    
    while(row<=n){
       
        int col=row;
        while(col<2*row){
            cout<<col<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}*/

//pattern 10
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}*/

// pattern11
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch='A';
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<ch<<" ";    //'A'+i-1 other way
            j++;
        }
        cout<<endl;
        ch++;
        i++;
    }
    return 0;
}*/

//pattern 12
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+j-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}*/

//pattern 13

/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    while(i<=n){
        int j=1;
        char ch='A';
        while(j<=n){
            
            cout<<ch++<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}*/

//pattern 14
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    char ch='A';
    while(i<=n){
        int j=1;
        
        while(j<=n){
            cout<<ch++<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}*/

//pattern 15
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int value =i;
        int j=1;
        while(j<=n){
            char ch='A'+value-1;
            cout<<ch<<" ";    //'A'+i+j-2
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}*/

//pattern 16
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+i-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}*/

//pattern 17
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}*/

// pattern18
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}*/

//pattern 19
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n){
        int j=1;
        char ch='A'+n-i;
        while(j<=i){
            
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}*/

//pattern20
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n,k=1;
        while(j>i){
            cout<<" ";
            j--;
        }
        while(k<=i){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}*/

//pattern 21
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int k=1;
        
        while(k<= n-i+1){
           
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}*/

//pattern22
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1,k=1;
        while(j<i){
            cout<<" ";
            j++;
        }
        while(k<=(n-i+1)){
            
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}*/

//pattern 23
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//pattern24
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=(n-i+1)){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//pattern 25
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1,k=1;
        int value=i;
        while (k<i)
        {
            cout<<" ";
            k++;
        }
        
        while(j<=(n-i+1)){
            cout<<i+j-1;   //value
            // value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//pattern 26
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1,count=1;
    while(i<=n){
        int j=1,k=n;
        while(k>i){
            cout<<" ";
            k--;
        }
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//pattern 27
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1,k=n,l=i-1;
        //spaces
        while(k>i){
            cout<<" ";
            k--;
        }
    //2nd triangle 
        while(j<=i){
            int count=j;
            cout<<j;
            j++;
        }
    //3rd triangle  (i-1)
        while(l){
            cout<<l;
            l--;
        }
        cout<<endl;
        i++;
    }
}*/

//pattern28
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        
        //printing first(triangle ) pattern 
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        //printing the star pattern, stars in each row 0,2, 4, 6,8 
        int k=(i-1)*2;
        while(k){
            cout<<"*";
            k--;
        }
        //printing the third (triangle) pattern reverse of first
        int l=n-i+1;
        while(l>=1){
            cout<<l;
            l--;
        }

        cout<<endl;
        i++;
    }
    return 0;
}
*/
