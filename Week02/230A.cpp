#include <iostream>
using namespace std;

int partition(int arr[], int arr1[], int low, int high);
void quicksort(int arr[], int arr1[], int low, int high);


void quickSort(int arr[], int arr1[], int low, int high)
{
    int pi;
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        pi = partition(arr, arr1, low, high);

        quickSort(arr, arr1, low, pi - 1);  // Before pi
        quickSort(arr, arr1, pi + 1, high); // After pi
    }
}

int partition (int arr[], int arr1[], int low, int high)
{
    // pivot (Element to be placed at right position)
    int pivot = arr[high];

    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            temp = arr1[j];
            arr1[j] = arr1[i];
            arr1[i] = temp;
            //swap arr[i] and arr[j]
        }
    }
    int temp = arr[high];
    arr[high] = arr[i + 1];
    arr[i + 1] = temp;
    temp = arr1[high];
    arr1[high] = arr1[i + 1];
    arr1[i + 1] = temp;
    //swap arr[i + 1] and arr[high])
    return (i + 1);
}


int main(){

    bool able = true;
    int strength;
    int n;
    cin>>strength>>n;
    int dragonStrength[n];
    int dragonBonus[n];

    for(int i=0; i<n;++i){
        cin>>dragonStrength[i]>>dragonBonus[i];
    }

    quickSort(dragonStrength, dragonBonus, 0, n-1);

    for(int i=0 ; i<n ; ++i){
        if(strength>dragonStrength[i]){
            strength += dragonBonus[i];
        }else{
            able = false;
            break;
        }
    }
    cout<<endl;
    if(able){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}


