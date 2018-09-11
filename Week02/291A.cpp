#include <iostream>
using namespace std;

int partition(long long int arr[], int low, int high);
void quicksort(long long int arr[], int low, int high);

void quickSort(long long int arr[], int low, int high)
{
    int pi;
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}

int partition (long long int arr[], int low, int high)
{
    // pivot (Element to be placed at right position)
    long long int pivot = arr[high];

    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            long long int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            //swap arr[i] and arr[j]
        }
    }
    long long int temp = arr[high];
    arr[high] = arr[i + 1];
    arr[i + 1] = temp;
    //swap arr[i + 1] and arr[high])
    return (i + 1);
}

int main(){

    int n;
    cin>>n;
    long long int array[n];
    for(int i=0;i<n;++i){
        cin>>array[i];
    }

    quickSort(array,0,n-1);

    int current = array[0];
    int connect = 0;
    int counter = 0;

    for(int i=0; i<n; ++i){

        if(array[i] == current && current != 0){
            ++connect;
            if(connect>=3){
                counter = -1;
                break;
            }else if(connect == 2){
                ++counter;
            }
        }else{
            current = array[i];
            connect = 1;
        }
    }

    cout<<counter;
    return 0;
}

