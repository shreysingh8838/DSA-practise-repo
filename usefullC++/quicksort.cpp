#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition(int a[], int low, int high){
    int pivot = a[high];
    int i = low-1;
    for(int j = low; j<=high-1; j++){
        if(a[j]<pivot){
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i+1],&a[high]);
    return i+1;
}

void quicksort(int a[], int low, int high){
    if(low < high){
        int pi = partition(a,low,high);
        quicksort(a, low, pi-1);
        quicksort(a, pi+1, high);
    }
}
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
} 
int main()
{
    fast;
    int a[] = {10, 7, 8, 15};
    int n = sizeof(a)/sizeof(a[0]);
    quicksort(a, 0, n-1);
    printArray(a, n); 
    return 0;
}