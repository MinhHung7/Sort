#include<iostream>
using namespace std;
void insertionSort(int a[], int n){
    for(int i=1;i<n;++i){
        int x = a[i];
        int pos = i - 1;
        while(pos>=0 && a[pos] > x){
            a[pos+1] = a[pos];
            a[pos] = x;
            --pos;
        }
    }
}
int main(){
    int a[] = {6,4,3,7,8,2,5,1,9};
    insertionSort(a,9);
    for(int i=0;i<9;++i){
        cout<<a[i]<<" ";
    }
    return 0;
}