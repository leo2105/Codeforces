#include <iostream>
using namespace std;

int main()
{
    int n1,n2;
    int k,m;
    long a,c,b;
    
    cin>>n1>>n2;
    cin>>k>>m;
    for(int i=0;i<n1;i++)
        if(i==k-1)
            cin>>a;
        else 
            cin>>c;
    
    bool flag = true;
    int cont1 = n2+1;
    
    for(int i=0;i<n2;i++)
    {
        cin>>c;
        if(c>a & flag)
        {
            b = c;
            flag = false;
            cont1=i+1;
        }
    
    }
    

    if((n2-cont1+1)>=m)
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}