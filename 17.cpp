#include<iostream>
#include<conio.h>
int main()
{int n,x;
std::cout<<"enter the size of square pattern";
std::cin>>n;
    for(int i=n;i>0;--i)
    { x=n-i;
    for(int k=x;k>0;--k)
{
    std::cout<<k+1;
}
            for(int j=0;j<i;j++)
            {std::cout<<j+1;}


             std::cout<<"\n";

    }
         return 0;
}

