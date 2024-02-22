#include <bits/stdc++.h>
using namespace std;
 
// Function to sort an array using
// insertion sort
void insertionSort(int arr[], int n)
{
    int i, key, j;
    int bangcounter = 0;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        // Move elements of arr[0..i-1],
        // that are greater than key, 
        // to one position ahead of their
        // current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
            bangcounter++;
        }
        arr[j + 1] = key;
    }
    cout << "I bang ur mom " << bangcounter << "timtes";
}
 
// A utility function to print an array
// of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 

int shellSort(int arr[], int n) 
{ 
	int bangcounter = 0;
    // Start with a big gap, then reduce the gap 
    for (int gap = n/2; gap > 0; gap /= 2) 
    { 
        // Do a gapped insertion sort for this gap size. 
        // The first gap elements a[0..gap-1] are already in gapped order 
        // keep adding one more element until the entire array is 
        // gap sorted  
        for (int i = gap; i < n; i += 1) 
        { 
            // add a[i] to the elements that have been gap sorted 
            // save a[i] in temp and make a hole at position i 
            int temp = arr[i]; 
  
            // shift earlier gap-sorted elements up until the correct  
            // location for a[i] is found 
            int j;             
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
            	arr[j] = arr[j - gap]; 
//            	cout << "bang!  "<< endl;
            	bangcounter++;
			}
                
              
            //  put temp (the original a[i]) in its correct location 
            arr[j] = temp; 
        } 
    } 
    
    cout << "I bang ur mom " << bangcounter << "timtes";
    return 0; 
} 
 
// Driver code
int main()
{
    int* arr1;
	int* arr2;
    int n;
	
	cout << "How many numbers do you want to sort: " << endl;
	cin >> n;
	
	arr1 = (int*)calloc(n, sizeof(int));
	arr2 = (int*)calloc(n, sizeof(int));
	
	for(int i = 0; i < n; i++){
		arr1[i] = rand() % 100;
		arr2[i] = arr1[i];
	}
	
  
    cout << "Array before sorting: \n"; 
    printArray(arr1, n); 
    shellSort(arr1, n); 
  
    cout << "\nArray after sorting: \n"; 
    printArray(arr1, n); 
    
    cout << "Array before sorting: \n"; 
    printArray(arr2, n); 
    insertionSort(arr2, n); 
  
    cout << "\nArray after sorting: \n"; 
    printArray(arr2, n); 
 
    return 0;
}
// This is code is contributed by rathbhupendra
