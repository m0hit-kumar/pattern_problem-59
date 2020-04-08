#include<iostream>
#include<conio.h>
int main()
{int n,x=1;
std::cout<<"enter the size of square pattern";
std::cin>>n;
    for(int i=0;i<n;i++)
    {std::cout<<"\n";

          for(int j=0;j<n;j++)
        {
           std::cout<<x;
           x++;
        }
    }
         return 0;
}

