#include<iostream>
using namespace std;


string reversed(string str){
    reverse(str.begin(),str.end());
    return str;
}


int main(){
    string str;
    getline(cin,str);
    if( str == reversed(str)){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
    return 0;
}




