#include <iostream.h>

int main()
{
    int n;

    cout<<"Enter the value pattern ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        
        for(int j=i; j<=n; j++)
        {
            cout<<i;
        }

        cout<<"\n";
    }

    return 0;
}
