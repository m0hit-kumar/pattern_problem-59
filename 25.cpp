#include <iostream.h>

int main()
{
    int n;

    cout<<"enter size of pattern";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        
        for(int j=1; j<=n-i+1; j++)
        {
            cout<<j;
        }

        cout<<"\n";
    }

    return 0;
}
