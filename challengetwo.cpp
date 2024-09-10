#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    int i;
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]!=1)
            break;
        
    }
    if(a[0]!=1)
        cout<<"\n"<<1<<endl;
    else
        cout<<"\n"<<a[i]+1;
    
    return 0;
}
