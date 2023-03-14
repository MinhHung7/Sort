#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int>&vt, int i,int n){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < n && vt[left] > vt[largest]){
        largest = left;
    }
    if(right < n && vt[right] > vt[largest]){
        largest = right;
    }
    
    if(largest != i){
        swap(vt[largest], vt[i]);
        heapify(vt, largest, n);
    }
}
void heapSort(vector<int>& vt){
    for(int i=vt.size()/2+1; i>=0;--i){
        heapify(vt, i, vt.size());
    }
    for(int i = vt.size()-1; i>=0;--i){
        swap(vt[0], vt[i]);
        heapify(vt, 0, i);
    }
}
int main(){
    cout<<"Nhap so phan tu trong day: ";
    int n; cin>>n;
    vector<int>vt;
    for(int i=0;i<n;++i){
        int x; cin>>x;
        vt.push_back(x);
    }
    heapSort(vt);
    for(int i=0;i<vt.size();++i){
        cout<<vt[i]<<" ";
    }
    return 0; 
}