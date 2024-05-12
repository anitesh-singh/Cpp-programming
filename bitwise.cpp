// bitwise
/*#include<iostream>
using namespace std;
int main()
{
    int a=4,b=6;
    cout<<"a&b "<<(a&b)<<endl;
    cout<<"a|b "<<(a|b)<<endl;
    cout<<"~a "<<(~a)<<endl;
    cout<<"a^b "<<(a^b)<<endl;
    cout<<"a<<b left shift "<<(19<<1)<<endl;
    cout<<"a<<b left shift "<<(21<<2)<<endl;
    cout<<"a>>b right shift "<<(17>>1)<<endl;
    cout<<"a>>b right shift "<<(17>>2)<<endl;
    return 0;
}*/

// increment/decrement
/*#include<iostream>
using namespace std;
int main()
{
    int i=7;
    cout<<++i<<endl;
    //8
    cout<<i++<<endl;
    //8 then inc to 9
    cout<<i--<<endl;
    //first 9then dec to 8
    cout<<--i<<endl;
    //dec to 7
    return 0;
}*/

// decimal to binary
/*#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0, i = 0;
    while (n != 0)
    {
        int bit = n & 1; // if the unit bit is 1 gives 1
        ans = (bit * pow(10, i)) + ans;

        n=n>>1;
        i++;
    }
    cout << ans << endl;
    return 0;
}*/

// for printing negative number into binary(the number stored in memory is 2s compliment of positive number with first digit 1-negative, we have to find the 2s compliment of that stored number)
// step 1. ignore the negative number, find the binary equivalent of the positive number
// step 2. find the 2s compliment of the positive number, you will get the negative number, as negative number is 2s cimpliment of the positive number.
/*#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "enter a negative number" << endl;
    cin >> n;
    int ans = 0, i = 0;
        n=n*(-1);
    while (n != 0)
    {

        int digit = n & 1;
        ans = digit * pow(10, i) + ans;
        n = n >> 1;
        i++;
    }
    ans = ~ans+1;
    cout << ans << endl;
}*/

// points: the number stored in memory is 2s compliment of the positive number, if we directly 2s compliment the number then we get the positive number back so either we have to keep the msb fixed or take the 2s compliment of positive number to get the output

// another way (correct way to find the 2s compliment )
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
    int i = 0;
    long long answer = 0;

    cout << "Enter a Negarive Binary Number : ";
    cin >> n;

    int tempN = n;

    n = abs(n);

    // Finding The One's Complement of Positive n (Directly)
    for (; n != 0 || i < 8; n = n >> 1, i++)
    {
        int lastBit = n & 1;
        if (lastBit == 0)
        {
            lastBit = 1;
        }
        else
        {
            lastBit = 0;
        }
        answer = (lastBit * pow(10, i)) + answer;
    }

    cout << "The one's Complement of Positive n is : " << answer << endl;

    // Finding Two's complement
    long long int twoComp = 0;
    int carr = 1;
    int j = 0;
    for (; answer != 0; answer /= 10, j++)
    {
        int lastDigit = answer % 10;
        if (lastDigit == 1 && carr == 1)
        {
            twoComp = (0 * pow(10, j)) + twoComp;
        }
        else if (lastDigit == 0 && carr == 1)
        {
            twoComp = (1 * pow(10, j)) + twoComp;
            carr = 0;
        }
        else
        {
            twoComp = (lastDigit * pow(10, j)) + twoComp;
        }
    }

    cout << "The Two's Complement is : " << twoComp << endl;

    cout << "** The Binary Representation of " << tempN << " is : " << twoComp << " *****" << endl;
    }
*/

// for negative number stored in memory
/*#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "enter a negative number" << endl;
    cin >> n;
    int ans = 0, i = 0;
    n = abs(n);
    //1s compliment
    while (n != 0,i<8)
    {

        int digit = n & 1;
        if (digit == 1)
        {
            digit = 0;
        }
        else if (digit ==0)
        {
            digit = 1;
        }
        ans = digit * pow(10, i) + ans;
         i++;
        n = n >> 1;

    }

    cout << ans << endl;
    //binary addition for 2s compliment
    int carry = 1, sum = 0, j = 0;
    while (ans != 0)
    {
        int digit = ans % 10;
        if (digit == 1 && carry == 1)
        {
            sum = 0 * pow(10, j) + sum;
        }
        else if (digit == 0 && carry == 1)
        {
            sum = 1 * pow(10, j) + sum;
            carry = 0;
        }
        else
        {
            sum = digit * pow(10, j) + sum;
        }
        j++;
        ans /= 10;
    }
    cout << sum << endl;
}*/

// 1s compliment of integer
/*#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = n;
    int mask = 0;  ///0000000000000000
    while (m != 0)   
    {
        mask = (mask << 1) | 1;   
        m = m >> 1;
    }  //o/p of mask= 000000000000000111 for input 5
    int ans = (~n) & mask; // doing and with compliment 
    cout << ans << endl;
    return 0;
}*/

//binary to decimal
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int i=0;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        if(digit==1){
            sum=sum + digit*pow(2,i);
        }
        i++;
        n=n/10;
    }
    cout<<sum<<endl;
    return 0;
}