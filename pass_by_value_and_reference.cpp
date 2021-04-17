#include <iostream>

using namespace std;

void increment_value(int x)
{
    x+=1;
    cout<<"Inside function Pass by value "<<endl<<"a = "<<x<<endl;
}
void increment_reference(int * ptr)
{
    *ptr +=1;
    cout<<"Inside function Pass by reference"<<endl<<"a = "<<*ptr<<endl;
}
int main()
{
    int a=10;
    cout<<"Initial value"<<endl<<"a = "<<a<<endl;
    increment_value(a);
    cout<<"After pass by value"<<endl<<"a = "<<a<<endl;
    increment_reference(&a);
    cout<<"After pass by reference"<<endl<<"a = "<<a<<endl;
    
    return 0;
    
}
