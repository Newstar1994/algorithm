#include <stdio.h>

void bubble_sort(int arr[], int n)
{

  for (int i = n - 1; i > 0; --i)
  {
    for(int j = 0; j < i; ++j)
    {
      if (a[j] > a[j + 1])
      {
        //swap a[j], a[j+1];
        int tmp = a[j];
        a[j] = a[j+1];
        a[j+1] = tmp;
      }
    }
  }

}

void insert_sort(int arr[], int n)
{
  int i, j, k;

  for (i = 1; i < n; ++i)
  {
    for (j = i-1; j >= 0; --j)
      if (a[j] > a[i])
        break;

    if (j != i - 1)
    {
      int tmp = a[i];
      for (k = i-1; k > j; --k)
        a[k + 1] = a[k];
      a[k+1] = tmp;
    }
  }
}

void merge_ordered_arr(int arr[], int start, int mid, int end)
{
  int * tmp = (int *)
}

void quick_sort(int arr[], int l, int r)
{
  if (l < r)
  {
    int i, j, x;

    i = l;
    j = r;
    x = arr[j];
    while(i < j)
    {
      //find the first element little than x, from right to left
      while (i < j && a[j] > x)
        j--;
      //find the first element greater than x, from left to right;
      while (i < j && a[i] < x)
        i++;

      //swap a[i], a[j];
      if (i < j)
      {
        int tmp = a[i];
        //tmp = a[i];
        a[i++] = a[j];
        a[j--] = tmp;
      }
    }

    a[r] = a[i];
    a[i] = x;

    quick_sort(arr, l, i - 1);
    quick_sort(arr, i+1, r);
  }
}
