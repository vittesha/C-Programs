#include <iostream>

using namespace std;

int
main ()
{
  //MEMORY ALLOCATION IN C++

/*   data -> memory -> static allocation / compile time allocation
                    -> dynamic allocation / run time
    
    
    
    COMPILE TIME ALLOCATION
    
    -The size of variables and the locations that will be assigned     to them are fixed during compile time. 
    -Just before execution, the variables are stored at these fixed memory locations.
    -Uses RAM memory
    
    adv:    fast
    disadv: less flexible
    
    
    
    RUN TIME ALLOCATION
    
    -Allows to define the memory size during run time
    -Uses heap memory (slightly bigger than static memory) and can be reused by deleting whatever is not required (using delete keyword) and reassigning the memory (using new keyword)
    
    
    new int; -> creates memory on heap memory
             -> gives address
             -> stored like int * ptr= new int; (the ptr is created and stored in static memory)
             -> especially useful in the case of large arrays
             
             
    int x;   -> creates variable on static memory

*/

  //static memory allocation
  //allocation is done by the programmer and deallocation is done by the compiler

  int b[100];
  //int b[100]={0}; initializes the static array with all zeroes
  cout << "size of b " << sizeof (b) << endl;
  cout << "value from symbol table " << b << endl;	//value from the symbol table where some static memory is allocated to the variable at compile time

  //dynamic memory allocation
  //both allocation and deallocation is done by the programmer

  int n;
  cout << "enter size of array: ";
  cin >> n;
  int *a = new int[n];
  //int * a = new int[n] {0};  to initialize the array with all zeroes
  cout << "size of pointer " << sizeof (a) << endl;
  cout << "value of pointer " << a << endl;	//variable that is created inside the static memory which contains the address of the first location of the arrays
  //this can be overwritten by assigning a new address to a eg: a= new char[30];

  cout << "enter array values: ";
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      cout << a[i] << " ";
    }

  delete[]a;
  return 0;

}
