// BT3_1_C3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



void Input(int a[]  , int n) {
    int i;
    
        for ( i= 0; i < n; i++) {
            printf("Nhap vao phan tu thu %d: ", (i + 1));
            scanf_s("%d", &a[i]);
            if (a[i] == 0)
                return;// output the array when you click 0 number.

        }
        printf("Array before sort: ");
        for (int j = 0; j < i; j++) {
            printf("%d", a[i]);
    }
}
void permutation(int x, int y) {
    int temp = x;
    x = y;
        y = temp;
}
void interchangeSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[i])
                permutation(a[i], a[j]);
  
}

void BubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; j > i; j--)
            if (a[j - 1] < a[j])
                permutation(a[j], a[j - 1]);
   
}


void InsertSort(int a[], int n)
{
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && a[j] <a[j - 1])
        {
            permutation(a[j], a[j - 1]);
            j--;
        }
    }
 
}
void SelectionSort(int a[], int n) {
    int min;
    for (int i =1 ; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;
                permutation(a[min],a[ i]);
    }
  
}
int main() {
    int a[100];
    int n;

    printf("nhap n vo ne: ");
    scanf_s("%d", &n);
    Input(a, n);
   // InsertSort(a, n);
  
    printf("Array after sort: ");
    SelectionSort(a, n);
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
    }
}