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
      while (i < j && a[j] > x)
        j--;
      while (i < j && a[i] < x)
        i++;
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
