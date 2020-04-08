#include<iostream>
#include<conio.h>
int main()
{int n,x=0;
std::cout<<"enter the size of square pattern";
std::cin>>n;
    for(int i=n;i>0;--i)
    {std::cout<<"\n";

          for(int j=1;j<n+1;j++)

        {if(i<j||i==j)
         std::cout<<n;
        else
         std::cout<<j+x;


        }x++;
    }
         return 0;
}



