#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int pos;
    char a[10][20], b[1][20];

for(int i=0;i<10;i++){
    cin>>a[i];
}
cin>> b[0];

if (ricerca(a,b,pos)){
    cout<<pos<<endl;
}else{
    cout<<"non presente"<<endl;
}
    return 0;
}
