#include <iostream.h>

int main()
{
    int k,n;

    cout<<"Enter size of pattern";
    cin>>n;

    for(int i=n; i>=1; i--)
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
