#include <iostream>
using namespace std;
int trailing_zeros(int n)
{
   int count = 0;
   for (int i=5;n/i>=1;i*=5)
   {
      int temp = n/i;
      count = count + temp;
   }
   return count;
}
int main(){
   int n;
   cout<<"Enter number:";
   cin>>n;
   cout<<"Count of trailing zeros in factorial of a number are: "<<trailing_zeros(n);
   return 0;
}