#include <stdio.h>
#include <iostream>
using namespace std;

void printArray(int g[], int n)
{
	for (int i = 0; i < n; i++)
	{

		cout << g[i] << " ";
	}
	cout << endl;
}
void bubbleSort(int g[], int n)
{
	int temp;

	for (int i = 0; i < n - 1; i++) // Fo r number of pass
	{
		// printf("Working on pass number %d\n", i+1);
		for (int j = 0; j < n - 1 - i; j++) // For comparison in each pass
		{
			if (g[j] > g[j + 1])
			{
				temp = g[j];
				g[j] = g[j + 1];
				g[j + 1] = temp;
			}
		}
	}
}

void insertionsort(int s[], int n)
{
	int j;
	int temp;
	for (int i = 1; i < n; i++)
	{
		temp = s[i]; // 4
		j = i - 1;	 // 0
		while (s[j] > temp && j >= 0)
		{ // 1//0
			s[j + 1] = s[j];
			j--;
		}
		s[j + 1] = temp;
	}
}
void selectionsort(int a[], int n)
{
	int temp;
	for (int i = 0; i < n; i++)

	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])

				temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
}

int partioning(int A[], int low, int high)
{
	int pivot, temp, i, j;
	pivot = A[low];
	i = low + 1;
	j = high;
	do
	{
		while (A[i] <= pivot)
		{

			i++;
		}
		while (A[j] > pivot)
		{
			j--;
		}
		if (i < j)
		{
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	} while (i < j);

	temp = A[low];
	A[low] = A[j];
	A[j] = temp;
	return j;
}
void quicksort(int A[], int low, int high)
{
	int partion;
	if (low < high)
	{

		partion = partioning(A, low, high);
		quicksort(A, low, partion - 1);	 // left subarray
		quicksort(A, partion + 1, high); // right subarray
	}
}
void merge(int A[], int low, int mid, int high)
{
	int i, j, k, B[high + 1];
	i = low;
	j = mid + 1;
	k = low;

	while (i <= mid && j <= high)
	{
		if (A[i] < A[j])
		{
			B[k] = A[i];
			i++;
			k++;
		}
		else
		{
			B[k] = A[j];
			j++;
			k++;
		}
	}
	while (i <= mid)
	{
		B[k] = A[i];
		i++;
		k++;
	}
	while (j <= high)
	{
		B[k] = A[j];
		j++;
		k++;
	}
	for (int i = low; i <= high; i++)
	{
		A[i] = B[i];
	}
}

void mergesort(int A[], int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		mergesort(A, low, mid);
		mergesort(A, mid + 1, high);
		merge(A, low, mid, high);
	}
}
int maximum(int A[], int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
		}
	}
	return max;
}
void countsort(int A[], int n)
{
	int i, j;
	int max = maximum(A, n);

	int Array[max];

	for (int i = 0; i <= max; i++)
	{
		Array[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		Array[A[i]] = Array[A[i]] + 1;
	}
	i = 0;
	j = 0;
	while (i <= max)
	{
		if (Array[i] > 0)
		{
			A[j] = i;
			Array[i] = Array[i] - 1;
			j++;
		}
		else
			i++;
	}
}

int main()
{
	// int A[] = {12, 54, 65, 7, 23, 9};
	//  int A[] = {1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987};
	int A[] = {9, 4, 4, 8, 7, 5, 6};
	int n = sizeof(A) / sizeof(A[0]);

	cout << "unsorted array \n";
	printArray(A, n); // Printing the array before sorting
	bubbleSort(A, n); // Function to sort the array
	cout << "bubble sort \n ";
	printArray(A, n); // Printing the array before sorting
	insertionsort(A, n);
	cout << "insertion sort \n";
	printArray(A, n);
	cout << "selection sort \n";
	selectionsort(A, n);
	printArray(A, n);
	cout << "quick sort \n";
	quicksort(A, 0, n - 1);
	printArray(A, n);
	mergesort(A, 0, n - 1);
	cout << "merge sort \n";
	printArray(A, n);
	countsort(A, n);
	cout << "count sort \n";
	printArray(A, n);

	return 0;
}
