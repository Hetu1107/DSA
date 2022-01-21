#include <iostream>
using namespace std;

void pi(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string sub = s.substr(1);
    if (s.length() > 1)
    {
        if (s[0] == 'p' && s[1] == 'i')
        {
            cout << 3.14;
            sub = s.substr(2);
        }
        else{
            cout<<s[0]<<"";
        }
    }
    else
    {
        cout << s[0] << "";
    }
    pi(sub);
}
int main()
{
    pi("pioppiop");
}