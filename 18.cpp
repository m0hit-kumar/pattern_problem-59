#include <iostream.h>
#include<conio.h>
int main()
{clrscr();
    int n, i, j;

    std::cout<<"Enter the value for which you want too print pattern for: ";
    std::cin>>n;
    for(i=n; i>=1; i--)
    {
        for(j=n; j>i; j--)
        {
            std::cout<<j;
        }
        for(j=1; j<=(i*2-1); j++)
        {
            cout<<i;
        }
        for(j=i+1; j<=n; j++)
        {
         std::cout<<j;
        }
std::cout<<"\n";
    }
    for(i=1; i<n; i++)
    {
        for(j=n; j>i; j--)
        {
           std::cout<<j;
        }
        for(j=1; j<=(i*2-1); j++)
        {
            std::cout<<i+1;
        }
        for(j=i+1; j<=n; j++)
        {
           std::cout<<j;
        }
        std::cout<<"\n";
    }
    return 0;
}

