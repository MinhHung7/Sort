#include<iostream>
using namespace std;
void heapify(int a[], int n, int i){
    int largest  = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left<n && a[left] > a[largest]){
        largest = left;
    }
    if(right < n && a[right] > a[largest]){
        largest = right;
    }
    if(largest != i){
        swap(a[largest], a[i]);
        heapify(a, n, largest);
    }

}
void HeapSort (int a[], int n){
    for(int i = n/2+1; i>=0;--i){
        heapify(a,n,i);
    }
    for(int i = n-1; i>=0;--i){
        swap(a[i], a[0]);
        heapify(a, i, 0);
    }
}
int main(){
    int a[] = {4,5,3,2,6,1,7,9,8};
    HeapSort(a, 9);
    for(int i=0;i<9;++i){
        cout<<a[i]<<" ";
    }
    return 0;
}