#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter an integer: ";
    int num;
    cin>>num;
    int originalNum,reversedNum;
    originalNum=num;
    if(num<0)
    cout<<"False"<<endl;
    while (num > 0) 
    {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num =num/10;
    }
    if(originalNum==reversedNum)
    cout<<"True"<<endl;
    else
    cout<<"False"<<endl;
    return 0;
}
