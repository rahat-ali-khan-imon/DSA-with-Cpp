//Special operator comma(,)

#include<iostream>
using namespace std;

int main()
{
    int x, y, sum;

    //sum = ( x = 20, y = 110, sum = x + y ); //comma operator
    sum = (x = 20, y = 110, x + y);
    //x = 20, y = 110 sum-expression and sum=x+y completed expression (This is comma operator)
    cout << sum;

    return 0;
}