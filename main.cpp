#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long x,x1, n, sum= 0;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Enter numeral system: ";
    cin>>n;
    while (x!=0){
        sum += x%n;
        x/=n;
    }
    cout<<"The sum of the digits of a number in a given number system: "<<sum;
    return 0;
}
