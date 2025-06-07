#include<bits/stdc++.h>
using namespace std;

//Largest element in array
int largest(){
    int n,arr[n];
    cout<<"Enter the number of elements ";
    cin>>n;
    cout<<"Enter Numbers:- ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int largest = arr[0];
    for(int i =0;i<n;i++){
          if(arr[i]>largest){
            largest = arr[i];
          }
    }  cout<<"Largest value is "<< largest<<endl;
}

//Second largest element in array

void s_largest() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "Need at least two elements.\n";
        return;
    }

    int arr[n];
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int second_largest = INT_MIN;
    bool found = false;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
            found = true;
        } else if (arr[i] != largest && (arr[i] > second_largest || second_largest == -1)) {
            second_largest = arr[i];
            found = true;
        }
    }

    if (found) {
        cout << "Second largest element is: " << second_largest << endl;
    } else {
        cout << "No second largest element (all elements may be equal).\n";
    }
}

//CHECK ARRAY IS SORTED OR NOT
void sort_yes_no(){
    int n,arr[n];
    bool found = false;
    cout<<"Enter the number of elements:- ";
    cin>>n;
    cout<<"Enter elemets:-  ";
    for(int i =1;i<n;i++){
        cin>>arr[i];
    } 
    for(int i = 1 ;i<n;i++){
        if(arr[i] >= arr[i-1]){
           found =  true;
        }else{
            found =  false;
        }        
    }
    if(found){
        cout<<"Array is sorted";
    }else{
        cout<<"Array is not sorted";
    }
}

//REMOVE THE DUPLICATE FROM SORTED SHARING 
 int remove_duplicate() {
    int n;
    cout << "Enter the number of elements:  ";
    cin >> n;

    if (n == 0 || n == 1) {
        return n;
    }

    int arr[n];
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    cout << "Array after removing duplicates: ";
    for (int j = 0; j <= i; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    return i + 1;  // new length
}

//LEFT ROTATE AN ARRAY BY D PLACES
 void rotate_array(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter numbers: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int temp = arr[0];
    for(int i =1;i<n;i++){
        arr[i-1] = arr[i];
    }arr[n-1]=temp;

    // Print rotated array

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
 }

 //MOVE ZERO TO END
  void zero_end(){
    /*Input: int arr[] = {23,3,1,0,5,667,8,0,0,87};
      Output : 23,3,1,6,667,8,87 */
      int n;
      cout<<"Enter number of elements:- ";
      cin>>n;
      cout<<"Enter numbers: ";
      int arr[n];
      for(int i =0;i<n;i++){
        cin>>arr[i];
      }
      int index=0;
      for(int i =0;i<n;i++){
        if(arr[i]!= 0){
            arr[index++] =arr[i];
        }
      }
      while(index <n){
        arr[index++] =0;
      }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
  } 
//LINEAR SEARCH
int linear(){
    int n;
    cout<<"Enter number of elements";cin>>n;
    int arr[n];
    cout<<"Enter numbers: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int key;
   cout<<"Enter key: ";
   cin>>key;
   for(int i =0;i<n;i++){
    if(arr[i]==key){
        cout<< i;
    }
   }return -1;
}

 //UNION OF AN ARRAY

void FindUnion() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    set<int> s;
    vector<int>Union;

    for (int i = 0; i < n; i++){
        s.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++){
        s.insert(arr2[i]);
    }
   for (auto & it: s){
    Union.push_back(it);
   }
    cout << "Union of arr1 and arr2 is:\n";
    for (auto &val : Union){
        cout << val << " ";  } 
        cout << endl; 
    }

int main() {
    FindUnion();
    return 0;
}
