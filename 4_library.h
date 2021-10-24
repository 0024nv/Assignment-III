#ifndef simple_library
#define simple_library

#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>

void insertatlast(int a[], int n, int key);
void insertatfirst(int a[],int n,int key);
void insertIteamAtIndex(int arr[], int n, int index, int num);
void deleteItemfromlast(int a[],int n);
void deleteIteamfromstart(int a[],int n);
void deleteIteamFromIndex(int arr[],int n, int index);
int findItemUnsorted(int a[], int n, int key);
int findItemSorted(int a[],int n,int key);
void sortArray(int a[],int n);
int* extractSubest(int a[], int n, int i, int j);
void deletesubset(int a[],int n,int i,int j);
int* splitIntoTwoArray(int a[], int n);
int *CloneArray(int a[],int n,int b[]);
void ShiftLeftArray(int a[],int n,int r);
void ShiftRightArray(int a[],int n,int r);
void RotateArrayClockwise(int a[],int n,int r);
void RotateArrayAnitiClockwise(int a[],int n,int r);
int FindMin(int A[],int n);
int FindMax(int A[],int n);
void FillArrayPseudoRandom(int A[], int n);
void FillArrayTrueRandom(int A[], int n);
int * IncreaseArraySize(int A[], int n, int m);
void SetArrayToZero(int A[],int n);
void DeleteArray(int a[], int n);
void DeleteallitemofarrayArray(int a[], int n);
int * AllocateArray(int A[],int n);

#endif // simple_library
