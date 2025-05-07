#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> m;
    // m[1]=4;
    // m[4]=67;
    // m[3]=74;
    // auto it = m.find(8);
    // cout << (*it).first << " " << it->second << endl;
    // return 0;

    int n;
    cin >> n;
    for ( int i=0 ; i<n ; i++ ){
        string s;
        cin >> s;
        m[s]++;
    }
    for( auto pr : m){
        cout << pr.first << " " << pr.second << endl;
    }
    return 0;
}