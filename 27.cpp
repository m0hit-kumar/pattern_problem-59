#include <iostream.h>

int main()
{
    int n;

    cout<<"Enter n: ";
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        
        for(int j=i; j>=1; j--)
        {
           cout<<j;
        }

        cout<<"\n";
    }

    return 0;
}
