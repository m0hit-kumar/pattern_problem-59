#include<iostream>
#include<conio.h>
int main()
{int n;
std::cout<<"enter the size of square pattern";
std::cin>>n;
    for(int i=0;i<n;i++)
    {std::cout<<"\n";
          for(int j=0;j<n;j++)
        { if( (i==0||i==(n-1)) && (j==0||j==(n-1)) )
            std::cout<<"0";

                else if(i==0||i==(n-1)||j==0||j==(n-1))
                    std::cout<<"1";
                    else
                        std::cout<<"0";

            }
    }
         return 0;
}

