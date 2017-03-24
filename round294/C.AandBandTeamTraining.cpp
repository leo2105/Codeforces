#include <iostream>
using namespace std;

int main(){
    int XP,NB,sum=0;
    cin>>XP>>NB;
    while(XP+NB>2 && XP!=0 && NB!=0){
        sum++;
        if(XP >= NB){
            XP-=2;
            NB--;       
        }
        else{
            if(NB > XP){
                NB-=2;
                XP--;
            }
        }
    }
    
    cout<<sum;
}