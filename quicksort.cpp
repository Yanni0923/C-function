/*
排序array
看第一個元素的大小可以是要安插在第幾個位置(將小的往左丟，大的往右丟)
將此index儲存在middle
並以此middle為分界點，前後再遞迴排序
*/

void quicksort(int a[], int low, int high)
{
    int middle;

    if (low >= high)
    {
        return;
    }

    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high)
{
    int part_element = a[low];

    for (;;)
    {
        while (low < high && part_element <= a[high])
        {
            high--;
        }
        if (low >= high)
        {
            break;
        }
        a[low++] = a[high];

        while (low < high && a[low] <= part_element)
        {
            low++;
        }
        if (low >= high)
        {
            break;
        }
        a[high--] = a[low];

    }

    a[high] = part_element;
    return high;
}