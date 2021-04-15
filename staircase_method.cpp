//Staircase method
#include <iostream>

using namespace std;

int main()
{
    int a[4][4]={{1,4,8,10},{2,5,9,15},{6,16,18,20},{11,17,19,23}};
    int n=4,i=0,j,x,count=0;
    x=16;
    j=n-1;
    while(x!=a[i][j])
    {   
        count+=1;
        if (count>2*n)
        break;
        if(x>a[i][j])
        i+=1;
        else if(x<a[i][j])
        j-=1;
    }
    if(count>=2*n)
    cout<<"error 404: not found";
    else
    cout<<"ans: "<<i+1<<" , "<<j+1;
    return 0;
}
