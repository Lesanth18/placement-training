#include <iostream>
using namespace std;
int main(void)
{
    int x y;
    int result;
 
    x=3;
    y=4;
    result=x%y;
    cout<<result<<endl;
 
    result=y % x;
    cout<<result<<endl;

    x=4;
    y=2;
 
    result=x%y;
    cout<<result;
 
    return 0;
}
