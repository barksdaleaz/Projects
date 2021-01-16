//
// Created by barks on 1/16/2021.
//
#include <iostream>
#include <vector>

using namespace std;

void merge(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int left, int right);
int main()
{

    return 0;
}

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L;
    vector<int> R;

    for(int i = 0; i < n1; i++)
    {
        L.push_back(arr[left+i]);
    }
    for(int j = 0; j < n2; j++)
    {
        R.push_back(arr[mid + 1 + j]);
    }

    int i = 0;
    int j = 0;
    int k = left;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        if(L[i] > R[j])
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if(left < right)
    {
        int mid = left + (right - left)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

