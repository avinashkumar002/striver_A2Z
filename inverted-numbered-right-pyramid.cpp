#include<iostream>
using namespace std;


int main(){
    int a =1;
    for( int i=5; i>0; i--){
         for(int j =0; j<i; j++){
            cout<<a++;
         }
         a=1;
         cout<<endl;
    }
    return 0;
}