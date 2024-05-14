// given an amount, using switch provide the number notes of 100, 50, 20, 1
/*#include <iostream>
using namespace std;
int main()
{
    int amt;
    cout << "Enter the amount:" << endl;
    cin >> amt;
    cout << "1.Rs 100 notes in the amount" << endl;
    cout << "2.Rs 50 notes in the amount" << endl;
    cout << "3.Rs 20 notes in the amount" << endl;
    cout << "4.Rs 5 notes in the amount" << endl;
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
    {
        if (amt >= 100)
        {
            int notes = amt / 100;
            cout << notes << endl;
        }
        else
            cout << "0" << endl;
        break;
    }
    case 2:
    {

        int rem ;
        if (amt>=100){ rem = amt % 100;}
        int notes;
        if (rem >= 50)
        {
            notes = rem / 50;
            cout << notes << endl;
        }
        else
            cout << "0" << endl;
        break;
    }
    case 3:
    {

        int rem ;
        if (amt>=100){ rem = amt % 100;}
        if (rem >= 50)
        {
            rem = rem % 50;
        }
        if(rem>=20){
        int notes = rem / 20;
        cout << notes << endl;}
        else
            cout << "0" << endl;
        break;
    }
    case 4:
    {
        int rem;
        if (amt>=100){ rem = amt % 100;}
        if (rem>=50){rem=rem%50;}
        if (rem>=20){rem=rem%20;}
        if (rem>=5){
        int notes = rem/5;
        cout << notes << endl;}
        else
            cout << "0" << endl;
        break;
    }
    }
    return 0;
}*/
