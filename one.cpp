#include<iostream>
using namespace std;
int main(){
    // cout << "hello" << endl;
    // cout<< "sh" << endl;

    // int a =10;
    // int* ptr = &a;
    // int** ptr1 = &ptr;
    // cout << **(ptr1) << endl;
    // cout << ptr << endl;
    // cout << *ptr << endl;

    int arr[5]={1,2,23,4,56};
    int* ptr = arr;
    cout << *(ptr+1)<< endl;
    cout << arr << endl;
    cout << *(arr+1);

    return 0;
}