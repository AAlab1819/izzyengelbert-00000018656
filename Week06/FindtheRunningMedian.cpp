#include <bits/stdc++.h>

using namespace std;


void heapify(double arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(double arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}


int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    double a[n] = {0};
    double b[n] = {0};
    //vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item;
        cin >> a_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        a[i] = a_item;
        heapSort(a, i+1);
        //for(int j=0; j<=i ; ++j){
            //cout<<a[j]<<"  ";
        //}
        //cout<<endl;
        if(i+1 == 1){
            b[i] = a[i];
        }else if((i+1) % 2 == 1){
            //cout<<"odd"<<endl;
            int index = ((i+1)/2);
            b[i] = a[index];
            //cout<<a[index]<<endl;
        }else if((i+1) % 2 == 0){
            //cout<<"even"<<endl;
            int index = i/2;
            double value = (a[index]+a[index+1])/2;
            b[i] = value;
            //cout<<value<<endl;
        }
        //cout<<endl;
    }

    for (int i = 0; i < n; i++) {
        cout<<b[i]<<endl;
    }


    return 0;
}
