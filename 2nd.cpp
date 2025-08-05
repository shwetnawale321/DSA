#include<iostream>
#include<string>
using namespace std;

void display(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void traverse(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void search(int arr[], int size, int key){
    for (int i = 0; i < size; ++i){
        if (arr[i] == key){
            cout << "Element found at index " << i << endl;
        return;
}
}
cout << "Element not found." << endl;
}

int main(){
    //array define
    int arr[10] = {10,20,30,40,50};
    int n = 5;
    cout<<"Display of Array"<<endl;
    display(arr, n);
    cout<<endl<<"Traversal of Array"<<endl;
    traverse(arr,n);
    search(arr,n, 30);
    
    
    return 0;
}















