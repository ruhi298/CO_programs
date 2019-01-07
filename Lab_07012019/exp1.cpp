#include<iostream>
using namespace std;
cov_binary(int n);
int main()
{
    int i,n;
    cout<<"\nEnter a binary number: ";
    cin>>n;
    cout<<"\nThe binary conversion of "<<n<<"is :\n ";
    cov_binary(n);

}
void cov_binary(int)
{
int num = n;
int m;
    int dec_value = 0;
    int base = 1;

    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp/10;

        dec_value += last_digit*base;

        base = base*2;
    }

    return dec_value;
}
cout<<"\nThe value of m is: \n";
cin>>m;

}
