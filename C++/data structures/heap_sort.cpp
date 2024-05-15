#include <iostream>
using namespace std;

void heapify(int a[], int n, int root){
    int max = root;
    int left = 2*root+1;
    int right = left+1;

    if(left<n && a[left]>a[max]){
        max = left;
    }
    if(right<n && a[right]>a[max]){
        max = right;
    }
    if(max != root){
        swap(a[root], a[max]);
        heapify(a,n,max);
    }
}

void build(int a[], int n){
    int lastParent = n/2 -1;
    for(int i=lastParent; i>=0; i--){
        heapify(a,n,i);
    }
}

void heapSort(int a[], int n){
    build(a,n);
    for(int i=n-1; i>0; i--){
        swap(a[0], a[i]);
        heapify(a,i,0);
    }
}

int main(){
    int n=11;
    int a[] = {10,3,7,4,6,1,2,9,8,5,15};

    build(a,n);

    cout <<"Heap: ";
    for(int i=0; i<n; i++)
        cout <<a[i] <<" ";
    cout <<endl;

    heapSort(a, n);
    
    cout <<"HeapSort: ";
    for(int i=0; i<n; i++)
        cout <<a[i] <<" ";

    return 0;
}
