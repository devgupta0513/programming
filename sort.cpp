#include <iostream>
using namespace std;
void print(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ,";
	}
}
void insertion_sort(int a[], int n)
{
	int temp;
	for (int i = 1; i < n; i++)
	{
		temp = a[i];
		int j = i - 1;
		while (a[j] > temp && j >= 0)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
	print(a, n);
}

void bubble(int a[], int n)
{
	int temp, i, j;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	print(a, n);
}
void selection(int a[], int n)
{
	int temp, i, j;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	print(a, n);
}

int partioning(int a[], int low, int high)
{
	int i, j, temp, pivot;
	pivot = a[low];
	j = high;
	i = low + 1;
	do
	{
		if (a[i] <= pivot)
		{
			i++;
		}
		if (a[j] > pivot)
		{
			j--;
		}
		if (i < j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	} while (i < j);

	temp = a[low];
	a[low] = a[j];
	a[j] = temp;
	return j;
}

void quick_sort(int a[], int low, int high)
{

	int partion;
	if (low < high)
	{

		partion = partioning(a, low, high);
		quick_sort(a, low, partion - 1);
		quick_sort(a, partion + 1, high);
	}
}
int merging(int a[], int low, int mid, int high)
{
	int b[high + 1];
	int i = low;
	int j = mid + 1;
	int k = low;
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			b[k] = a[i];
			i++;
			k++;
		}
		else
		{
			b[k] = a[j];
			j++;
			k++;
		}
	}
	while (i <= mid)
	{
		b[k] = a[i];
		i++;
		k++;
	}
	while (j <= high)
	{
		b[k] = a[j];
		j++;
		k++;
	}
	for (int d = low; d <= high; d++)
	{
		a[d] = b[d];
	}
}
int merge_sort(int a[], int low, int high)
{
	int mid = (low + high) / 2;
	if (low < high)
	{
		merge_sort(a, low, mid);
		merge_sort(a, mid + 1, high);
		merging(a, low, mid, high);
	}
}

int maximum(int a[], int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}

int count(int a[], int n)
{
	int max = maximum(a, n);
	int array[max];
	for (int i = 0; i < max; i++)
	{
		array[i] = 0;
	}
	for (int i = 0; i < max; i++)
	{
		array[a[i]] = array[a[i]] + 1;
	}

	int i = 0, j = 0;
	while (i < max)
	{
		if (array[i] > 0)
		{
			a[j] = i;
			array[i] = array[i] - 1;
			j++;
		}

		i++;
	}
}

int main()
{
	int a[] = {5, 6, 9, 8, 7, 3, 4, 2, 1, 0};
	int n = sizeof(a) / sizeof(a[0]);
	count(a, n);
	print(a, n);
	return 0;
}
