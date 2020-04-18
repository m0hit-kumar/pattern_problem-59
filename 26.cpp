#include <iostream.h>

int main()
{
    int n;

    cout<<"Enter pattern size ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        
        for(int j=i; j>=1; j--)
        {
            cout<<j;
        }

        cout<<"\n";
    }

    return 0;
}
