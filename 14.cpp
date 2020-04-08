#include<iostream>
#include<conio.h>
int main()
{int n;
std::cout<<"enter the size of square pattern";
std::cin>>n;
    for(int i=n;i>0;--i)
    {std::cout<<"\n";

         for(int j=n;j>0;--j)
        {if(i==j)
         std::cout<<j;
         else if(i<j)
            std::cout<<j;
         else
            std::cout<<i;


        }
    }
         return 0;
}


