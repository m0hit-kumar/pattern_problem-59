#include <iostream.h>

int main()
{
    int n,k;

    cout<<"Enter size of pattern";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        k = i;

       
        for(int j=1; j<=i; j++, k++)
        {
           cout<<k;
        }

        cout<<"\n";
    }

    return 0;
}
