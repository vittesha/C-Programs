//palindrome string


#include <iostream>
#include<string.h>
using namespace std;

bool palindrome(char a[])
{
    int i=0, j=strlen(a)-1;
    while(i<j)
    {
        if (a[i]==a[j])
        {
            i++;
            j--;
        }
        else
        return false;
    }
    return true;
}
int main()
{
    char str[100];
    cin.getline(str,100);
    bool a = palindrome(str);
    if (a==true)
    cout<<"palindrome";
    else
    cout<<"not palindrome";
    return 0;
}
