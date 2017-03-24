#include <iostream>
using namespace std;
int main()
{
    char A[8][8];
    int b=0,n=0;
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
        {   
            cin>>A[i][j];
            switch(A[i][j])
            {
                case 'Q':b+=9;
                break;
                case 'R':b+=5;
                break;
                case 'B':b+=3;
                break;
                case 'N':b+=3;
                break;
                case 'P':b++;
                break;
                case 'q':n+=9;
                break;
                case 'r':n+=5;
                break;
                case 'b':n+=3;
                break;
                case 'n':n+=3;
                break;
                case 'p':n++;
                break;
            }
        }
    if(b==n)
        cout<<"Draw";
    else
        if(b>n)
            cout<<"White";
        else
            cout<<"Black";          
    
    
    return 0;
}