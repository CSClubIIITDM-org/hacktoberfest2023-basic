#include<iostream>
#include<string>
using namespace std;

int lengthOfLastWord(string s) 
{
    int length = 0;
    int i = s.length()-1 ;
    int flag=0;
    for(int j=s.length()-1;j>=0;j--)
    {
        if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122)||s[i]==32)
        {
            flag=0;
        }
        else
        {
            flag=1;    //to know whether it is a valid string
            break;
        }
    }
    if(flag==1)
    return 0;
    else
    {
        while (i >= 0 && s[i] != ' ') 
        {
            length++;
            i--;
        }
        return length;
    }
}

int main() 
{
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);     // getline function is used to take space separated words/ a line as input.
    cout<<lengthOfLastWord(str);
    return 0;
}
