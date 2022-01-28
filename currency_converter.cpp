#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    float amt,famt=0;
    cout<<"Enter the amount in Indian Rupee(INR) to be converted: ";
    cin>>amt;
    cout<<"\nEnter the choice from the following list\n1.US Dollar(USD)\n2.European Euro(EUR)\n3.Japanese Yen(JPY)\n4.British Pound(GBP)\n5.Swiss Franc (CHF)\n6.Canadian Dollar (CAD)\n7.Australian/New Zealand Dollar.\n8.South African Rand (ZAR)\n";
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            famt=amt*0.013;
            cout<<"\nEquivalent Amount is $"<<famt;
            break;
        }
        case 2:
        {
            famt=amt*0.012;
            cout<<"\nEquivalent Amount is €"<<famt;
            break;
        }
        case 3:
        {
            famt=amt*1.54;
            cout<<"\nEquivalent Amount is ¥"<<famt;
            break;
        }
        case 4:
        {
            famt=amt*0.0099;
            cout<<"\nEquivalent Amount is £"<<famt;
            break;
        }
        case 5:
        {
            famt=amt*0.0124;
            cout<<"\nEquivalent Amount is "<<famt<<" CHF";
            break;
        }
        case 6:
        {
            famt=amt*0.017;
            cout<<"\nEquivalent Amount is C$"<<famt;
            break;
        }
        case 7:
        {
            famt=amt*0.019;
            cout<<"\nEquivalent Amount is A$"<<famt;
            break;
        }
        case 8:
        {
            famt=amt*0.21;
            cout<<"\nEquivalent Amount is R"<<famt;
            break;
        }
        default:
        {
            cout<<"\nSelect a valid option";
        }
    }
    
    return 0;
}
