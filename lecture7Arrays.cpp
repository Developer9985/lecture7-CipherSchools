#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];

    // int arr[5] = { 10, 20, 30 , 40};
    char charArr[5] = {'a','b','c','d','e'};
    float floatArr[5] = {10.5, 20.5, 30.5, 40.5, 50.5};

    // taking input of array elemnets
    for(int i=0; i < n; i++){

        cin>>arr[i];
    }

    // Printing the array elements

    for(int i=0; i < n; i++){

        cout<<arr[i]<<" ";
    }
    for(int i=0; i < 5; i++){

        cout<<charArr[i]<<" ";
    }
    for(int i=0; i < 5; i++){

        cout<<floatArr[i]<<" ";
    }
}