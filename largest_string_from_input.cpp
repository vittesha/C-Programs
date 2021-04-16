//largest string from input strings

#include <iostream>
#include<string.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    cin.get();
    char str[100],largest[100]={};
    for(int i=0; i<n; i++)
    {
        cin.getline(str,100);
        if (strlen(str)>strlen(largest))
        {
            strcpy(largest,str);
        }
    }
    cout<<"largest string is: "<<largest;
    return 0;
}
