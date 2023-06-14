int p = partition(arr, s, e);
        quick_sort(arr, s, p - 1);
        quick_sort(arr, p + 1, e);