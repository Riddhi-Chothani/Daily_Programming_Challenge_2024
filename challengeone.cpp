#include<iostream>  
using namespace std;  
  
int main()  
{  
    int n;  
    cout << " Enter number of elements present in the array: " << endl ;  
    cin >> n ;  
    int A[n];
    cout <<"Enter array:"<<endl;  
    for(int i=0;i<n;i++)  
    {  
        cin>>A[i];  
    }  
    int i=0,countzero=0,countone=0,counttwo=0;  
    while ( i < n )  
    {  
        if ( A [ i ] == 0 )  
        {  
            countzero = countzero + 1 ;  
        }  
        else if ( A [ i ] == 1 )  
        {  
            countone = countone + 1 ;  
        }  
        else  
        {  
            counttwo=counttwo+2;  
        }  
        i=i+1;  
    }  
    for(int i=0;i<countzero;i++)  
    {  
        A[i]=0;  
    }  
    for(int i=countzero;i<countzero+countone;i++)  
    {  
        A[i]=1;  
    }  
    for(int i=countzero+countone;i<n;i++)  
    {  
        A[i]=2;  
    }  
    for(int i=0;i<n;i++)  
    {  
        cout <<A[i]<<" " ;  
    }  
    return 0;  
      
}  
