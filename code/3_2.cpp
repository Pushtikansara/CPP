// array_lib.h (C Header File)
#ifndef ARRAY_LIB_H
#define ARRAY_LIB_H

void insert(int arr[], int *size, int value, int position);
void deleteElement(int arr[], int *size, int position);
int search(int arr[], int size, int value);
void sort(int arr[], int size);
void display(int arr[], int size);

#endif

// array_lib.c (C Source File)
#include "array_lib.h"
#include <stdio.h>

void insert(int arr[], int *size, int value, int position) {
    if (position >= 0 && position <= *size) {
        for (int i = *size; i > position; i--) arr[i] = arr[i - 1];
        arr[position] = value;
        (*size)++;
    }
}

void deleteElement(int arr[], int *size, int position) {
    if (position >= 0 && position < *size) {
        for (int i = position; i < *size - 1; i++) arr[i] = arr[i + 1];
        (*size)--;
    }
}

int search(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) if (arr[i] == value) return i;
    return -1;
}

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}

// ArrayLib.hpp (C++ Header File)
#ifndef ARRAYLIB_HPP
#define ARRAYLIB_HPP
#include <vector>
#include <iostream>
using namespace std;

class ArrayLib {
    vector<int> arr;
public:
    void insert(int value, int position) {
        if (position >= 0 && position <= arr.size()) arr.insert(arr.begin() + position, value);
    }
    void deleteElement(int position) {
        if (position >= 0 && position < arr.size()) arr.erase(arr.begin() + position);
    }
    int search(int value) {
        for (size_t i = 0; i < arr.size(); i++) if (arr[i] == value) return i;
        return -1;
    }
    void sort() { std::sort(arr.begin(), arr.end()); }
    void display() {
        for (int num : arr) cout << num << " ";
        cout << endl;
    }
};
#endif

