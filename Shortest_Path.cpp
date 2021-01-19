#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    char a;
    int x=0,y=0;
   /* Finding Shortest Path
   we input direction is n,e,w,s and output the final displacement, distance and the shortest path in terms of n,s,w,e */
    cout<<"enter n,s,e,w or '.' for ending"<<endl;


    while(a!='\n')
    {a=cin.get();
        if (a=='n')
        y+=1;
        else if (a=='s')
        y-=1;
        else if (a=='e')
        x+=1;
        else if (a=='w')
        x-=1;
    }
       cout<<"person is at x= "<<x<<" and y= "<<y<<endl;
       float z= sqrt(pow(x,2)+pow(y,2));
       int d= x+y;
       cout<<"displacement is "<<z<<endl<<" distance is "<<d<<endl;

       if(x>0)
       {for(;x>0;x--)
       {
           cout<<"e";
       }
           x++;
       }
       if(x<0)
       {for(;x<0;x++)
       {
           cout<<"w";
       }

          x--;
       }
       if(y>0)
       {
           for(;y>0;y--)
       {
           cout<<"n";
       }
           y++;
       }
       if(y<0)
       {
           for(;y<0;y++)
       {
            cout<<"s";
       }
          y--;
       }
    return 0;
}
