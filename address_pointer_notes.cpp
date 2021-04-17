#include <iostream>

using namespace std;

int main()
{
    //ADDRESS
    
    
    //c++ displays address in hexadecimal form
    // ' & ' finds adress of variable
    //but if we use &a for a char stored in a, it will display the 
    //character and not the address due to operator overloading
    //operator overloaded is << and not the &
    
    int a=2;
    cout<<&a<<endl;
    char b='A';
    cout<<&b<<endl;
    
    //explicit typecasting
    //converting char * to void *
    cout<<(void *)&b<<endl;
    
    //POINTER
    
    
    //variable that stores the address of another variable
    //if we want to store address of variable of type int,
    //pointer should be of type int *
    
    //declaring pointer variable
    //datatype * variable_name;
    int x = 10;
    int * y = &x; //declaration + intialization
    int * z;      //declaration
    z= &x;        //intialization
    cout<<"y="<<y<<endl;
    cout<<"&x="<<&x<<endl;
    cout<<"z="<<z<<endl;
    //can't store variables to pointer of diff datatype 
    //eg: char occupies 1 byte and int ocuupies 4, if we 
    //store int number to char pointer, when we read it,
    //it will only read the first character
    
    return 0;
}
