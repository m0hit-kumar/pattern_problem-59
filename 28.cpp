#include <iostream.h>

int main()
{
    int n;

    cout<<"Enter n: ";
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        
        for(int j=n; j>=i; j--)
        {
           cout<<j;
        }

        cout<<"\n";
    }

    return 0;
}
