#include <iostream>
using namespace std;
void bubble(int a[], int s) {
    for (int i = 0; i < s - 1; i++) {
        for (int j = 0; j < s- i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int t= a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}
void selection(int a[], int s) {
    for (int i = 0; i < s- 1; i++) {
        int m=i;
        for (int j = i + 1; j < s; j++) {
            if (a[j] < a[m]) {
                m= j;
            }
        }
        int t = a[i];
        a[i] = a[m];
        a[m] = t;
    }
}
void print(int a[], int s) {
    for (int i = 0; i < s; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    int a1[] = {9, 5, 7, 1, 3, 8, 2, 4, 6, 0}; 
    int s = sizeof(a1) / sizeof(a1[0]); 
    bubble(a1,s);
    cout << "Array after Bubble Sort in ascending order: ";
    for (int i = 0; i < s; i++) {
        cout << a1[i] << " ";
    }
    cout << endl;
    cout << "Array after Bubble Sort in descending order: ";
    for (int i = s-1; i > 0; i--) {
        cout << a1[i] << " ";
    }
    cout << endl;
    int a2[] = {9, 5, 7, 1, 3, 8, 2, 4, 6, 0};
    selection(a2, s);
    cout << "Array after Selection Sort in ascending order: ";
    for (int i = 0; i < s; i++) {
        cout << a2[i] << " ";
    }
    cout << endl;
    cout << "Array after Bubble Sort in descending order: ";
    for (int i = s-1; i > 0; i--) {
        cout << a1[i] << " ";
    }
    cout << endl;
    return 0;
}

