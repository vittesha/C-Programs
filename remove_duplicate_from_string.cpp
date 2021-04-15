//remove consecutive duplicates in string

#include <iostream>
#include<string.h>
using namespace std;

void remove_duplicate(char a[])
{
    int n= strlen(a);
    
    if(n==0 or n==1)
    return;
    
    int i=0,j=1;
    for(j=0; j<n; j++)
    {
        if(a[i]!=a[j])
        {
            i++;
            a[i]=a[j];
        }
    }
    a[i+1]='\0';
    return;
    
}

int main()
{
    char str[100];
    cin.getline(str,100);
    remove_duplicate(str);
    cout<<str;
    return 0;
}
