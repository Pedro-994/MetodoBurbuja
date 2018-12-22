#include<iostream>
#include<cstdlib>
#define MAX 100
using namespace std;

void Imprime(int[], int);
void Llenar(int[], int);
void Ascendente(int[],int);
void Descendente(int[],int);
int A[MAX],aux=0,tam=0;
int main(){
    cout<<"Digite el tamaño del vector. ";
    cin>>tam;
    Llenar(A,tam);
    cout<<"\nVector inicial\n";
    Imprime(A,tam);
    cout<<"\n";
    cout<<"\nVector Ascendente\n";
    Ascendente(A,tam);
    Imprime(A,tam);
    cout<<"\nDescendente\n";
    Descendente(A,tam);
    Imprime(A,tam);
}
 void Imprime(int A[],int tam){
    for(int i=0; i<tam-1; i++)
        cout<<A[i]<<" ";
 }
 void Llenar(int A[], int tam){
         for(int i=0; i<10; i++)
        A[i] = rand () % 10;
 }
void Ascendente(int A[], int tam){
    for(int i = 0; i<tam-1; i++)
        for(int j = 0; j<tam-1; j++){
                if(A[j] > A[j+1]){
                    aux = A[j];
                    A[j] = A[j+1];
                    A[j+1] = aux;
                }
    }
}
void Descendente(int A[], int tam){
    for(int i = 0; i<tam-1; i++)
        for(int j = 0; j<tam-1; j++){
                if(A[j] < A[j+1]){
                    aux = A[j];
                    A[j] = A[j+1];
                    A[j+1] = aux;
                }
    }
}
