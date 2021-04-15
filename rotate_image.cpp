//Rotate Image

#include <iostream>

using namespace std;

void rotate(int a[][1000], int n)
{
    //reverse each row
    for(int i=0; i<n; i++)
    {
        int start_col=0, end_col=n-1;
        while(start_col<end_col)
        {
            swap(a[i][start_col],a[i][end_col]);
            start_col++;
            end_col--;
        }
    }

    //transpose
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i<j)
            swap(a[i][j],a[j][i]);
        }
    }
}

void display(int a[][1000], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    
    
}
int main()
{
    int a[4][1000]={{1,4,8,10},{2,5,9,15},{6,16,18,20},{11,17,19,23}};
    int n=4;
    display(a,n);
    rotate(a,n);
    cout<<endl<<endl;
    display(a,n);
    return 0;
}
