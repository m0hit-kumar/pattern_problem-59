#include <iostream.h>

int main()
{
    int n,k;

    cout<<"Enter size of pattern";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        k = (i * 2) - 1;

       
        for(int j=i; j<=n; j++, k+=2)
        {
           cout<<k;
        }

        cout<<"\n";
    }

    return 0;
}
