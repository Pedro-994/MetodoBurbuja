#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int A[10];

    cout<<"\nVector inicial\n";
    for(int i=0; i<10; i++){
        A[i] = rand() % 10;
        cout<<A[i]<<" ";
    }
    cout<<"\n";
}
