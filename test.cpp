#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool istrue = false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            istrue = true;
        }
    }
    if( istrue == true ){
        cout << "no" << endl;
    }
    else{
        cout << "yes" << endl;
    }
        
    return 0;
}
