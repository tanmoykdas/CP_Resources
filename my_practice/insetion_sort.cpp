#include<bits/stdc++.h>
using namespace std;
int insertion_sort(int* a, int n) {
    for(int i = 1; i < n; i++) { // i = 1 cause initial sub array is i = 0
        int temp = a[i]; // picing 1 element each time
        int j = i - 1; // locating last element of sorted sub array
        while(j >= 0 && a[j] > temp) { // going back of sorted array and comparing 
            a[j + 1] = a[j]; //passing element to the right side 
            j--;
        }
        a[j + 1] = temp; // inserting element on his desired position
    }
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for(auto& x:a) cin >> x;
    insertion_sort(a, n);
    for(auto x:a) cout << x << " ";
    return 0;
}