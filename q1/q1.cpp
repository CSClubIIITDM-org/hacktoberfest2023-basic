#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    // below loop runs n times (if no number has 9 in it)
    for(int i=1;i<=n;i++)
    {
        // checks if a number has 9 in one of its digits
        for(int j=i;j!=0;j/=10) 
        {
            if(j%10==9) 
            {
                n++;
                break;
            }
        }
    }
    cout<<n<<endl;
    return 0;
}
