#include<iostream>
using namespace std;
int main()
{
    
    
    int n=0;
    cout<<"Enter N: ";
    cin>>n;
    //char ch='A';
    // for(char i='A'; i<'A'+n;i++)
    // {
    //     for(char j=i;j>='A';j--)
    //     {
    //         cout<<j<<" ";
    //     }
    //     // ch++;
    //     cout<<endl;
    //     //ch++;
        
    // }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        
        
        cout<<endl;
    }   
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
