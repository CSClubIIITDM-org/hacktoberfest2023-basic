#include <iostream>
#include <string>

using namespace std;

int main()
{
    string roman;
    //Takes Roman Characters as Input
    cin >> roman;
    int n=0;
    //Calculating One Symbol at a time
    for (int i=0;i<roman.length();i++)
    {
        if(roman[i]=='M')
        {
            n+=1000;
        }
        else if(roman[i]=='C')
        {
            if(roman[i+1]=='M')
            {
                n+=900;
                i++;
            }
            else if(roman[i+1]=='D')
            {
                n+=400;
                i++;
            }
            else
            {
                n+=100;
            }
        }
        else if(roman[i]=='D')
        {
            n+=500;
        }
        else if(roman[i]=='X')
        {
            if(roman[i+1]=='C')
            {
                n+=90;
                i++;
            }
            else if(roman[i+1]=='L')
            {
                n+=40;
                i++;
            }
            else
            {
                n+=10;
            }
        }
        else if(roman[i]=='L')
        {
            n+=50;
        }
        else if(roman[i]=='I')
        {
            if(roman[i+1]=='X')
            {
                n+=9;
                i++;
            }
            else if(roman[i+1]=='V')
            {
                n+=4;
                i++;
            }
            else
            {
                n+=1;
            }
        }
        else if(roman[i]=='V')
        {
            n+=5;
        }
        else
        {
            cout << "Invalid Symbol";
            break;
        }
    }
    cout << n<<endl;
    return 0;
}