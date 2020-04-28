#include <iostream.h>

int main()
{
    int n;

    cout<<"Enter size of pattern";
    cin>>n;

    for(int i=n; i>=1; i--)
    {
       
        for(int j=i; j<=n; j++)
        {
            cout<<j;
        }

        cout<<"\n";
    }

    return 0;
}
