#include <iostream>

using namespace std;

int main()
{
    //DEREFERENCE OPERATOR (*)
    
//  USES

//    multiplication 5*7=35
//    pointer int * ptr;
//    dereference any address

    // &variable= address
    // *address= bucket
    
    int x=10;
    int * ptr;
    ptr=&x;
    cout<<"x="<<x<<endl;              //x
    cout<<"&x="<<&x<<endl;            //address of x
    cout<<"ptr="<<ptr<<endl;          //address of x
    cout<<"*(&x)="<<*(&x)<<endl;      //x
    cout<<"*(&ptr)="<<x<<endl;        //x
    cout<<"*ptr="<<*ptr<<endl;        //address of x
    cout<<"&(*ptr)="<<&(*ptr)<<endl;  //address of x
    
    //pointer to pointer- double pointer
    int ** a;
    a=&ptr;
    cout<<"double pointer="<<a<<endl;
    return 0;
    
}
