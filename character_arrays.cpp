//Character Arrays

#include <iostream>

using namespace std;

int main()
{
    //null character = '\0' and has ASCII value=0
    
    // int vs char array - PRINT
    int a[]={1,2,3,4};
    cout<<a<<endl; //prints address of starting point of array
    
    char b[]={'s','t','r','i','n','g','\0'};
    char d[]= "another";
    cout<<b<<endl<<d<<endl; //prints the array 
    
    //INPUT- can take direct input using array name
    char c[10];
    cin>>c;
    cout<<c<<endl;
    
    //can't use cin to read sentences as soon as space comes, it does not read any further
    //soln= cin.getline(array, size, deLime='stopping point like \n')
    //by default delimiter = new line, we can change that if we want to input paragraph
    char s[100];
    cin.getline(s,99,'#');
    cout<<s;
    
    return 0;
}
