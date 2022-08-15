

#include <bits/stdc++.h>
using namespace std;

// inersertion sort ;

// void printArr(int array[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<< array[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int array[50];
//     int size;
//     cin>> size;
//     for (int i = 0; i < 5; i++)
//     {
//         cin>>array[i];
//     }
//     cout<<"print give any array : ";
//     printArr(array,size);
//     cout<<endl;
//     // insertion array element;

//     int pos,value;
//     cout<<"please give a position : ";
//     cin>>pos;
//     cout<<" value of the positon :  ";
//     cin>>value;
//     if (pos< 0|| pos>size)
//     {
//         cout<<"position value not valied";
//     }
//     else{
//         // for (int i = size-1; i >= pos; i--)
//         // {
//         //     array[i+1]=array[i];

//         // }
//         array[size] = array[pos];
//         array[pos]= value;

//     }
//     cout<<"after array insertion : ";
//     printArr(array,size + 1);

//     return 0;
// }

// array deletion empliment ;

// void printArr(int array[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int array[50];
//     int size;
//     cin >> size;
//     for (int i = 0; i <size; i++)
//     {
//         cin >> array[i];
//     }
//     cout << "print give any array : ";
//     printArr(array, size);
//     cout << endl;

//     int pos;
//     cout << "array of ddeletion : ";
//     cin >> pos;

//     // deletion emplemt ;
//     if (pos < 0 || pos > size - 1)
//     {
//         cout << "this number invalied ";

//     }
//     else
//     {
//         if (pos == size-1) size--;
//         else
//         {
//             for (int i = pos + 1; i < size; i++)
//             {
//                 array[i - 1] = array[i];
//             }
//             size--;
//         }

//     }
//     cout<<"after of array deletion ;";
//     printArr(array,size);

//     return 0;
// }

// linear search inpliment

// int main()
// {
//     int n;
//     cin >> n;
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     char c;
//     cout << "please inter a search value :";
//     cin >> c;
//     while (toupper(c) == 'Y')
//     {
//         int checkValue;
//         cout << "enter a checkValue : ";
//         cin >> checkValue;
//         int flag = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (array[i] == checkValue)
//             {
//                 flag = 1;
//                 cout << "index value " << i << "position " << i + 1 << endl;

//             }
//         }
//         if (flag == 0)
//             cout << "value invalied" << endl;

//         cout<<"do you contiuse search : ";
//         cin>>c;
//     }

//     return 0;
// }

// bubble sorte implement..//
// #include <bits/stdc++.h>
// using namespace std;
// void printArray(int array[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }
//     cout << "before sort " << endl;
//     printArray(array, n);

//     // bubble sort impliment
//     for (int i = 0; i < n; i++)
//     {
//         cout << "itration no: "<< i << endl
//              << "step no : " << i <<endl;
 
//         // bubble sort modified 
//         int flag = 0;
//         for (int j = 0; j < n - i; j++)
//         {
//             if (array[j] > array[j + 1])
//             {
//                 int tamp = array[j];
//                 array[j] = array[j + 1];
//                 array[j + 1] = tamp;
//                 flag = 1;
//             }
//              printArray(array, n);
//         }
//        cout<<endl;
//        if (flag == 0) break;
       
       
//     }
//     cout << "after sort array " << endl;
//     printArray(array, n);
//     cout << endl;
// }

// NUMBER 1 SOLUTION ;

// #include <bits/stdc++.h>
// using namespace std;
// void print_array(int a[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }
// }
// void bubble_sort(int a[], int n) {
//     for (int i = 1; i <= n; i++) {
//         bool is_swap = false;
//         cout << i << " iteration: " << endl;
//         int step = 1;
//         for (int j = 0; j < n - i; j++) {
//             if (a[j] > a[j + 1]) {
//                 cout << "\t" << step << " step: ";
//                 print_array(a, n);
//                 cout << "---> ";
//                 swap(a[j], a[j + 1]);
//                 is_swap = true;
//                 print_array(a, n);
//                 cout << endl;
//                 step++;
//             }
//         }
//         if (!is_swap) break;
//     }
// }
// int main() {
//     int a[] = {7, 2, 13, 2, 11, 4};
//     int len = sizeof(a) / sizeof(a[0]);

//     bubble_sort(a, len);
// } 

// NUMBER 4 ---EXAM

// #include <bits/stdc++.h>
// using namespace std;
// void print_array(int a[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }
// void insertion_sort(int a[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = a[i];
//         int j = i - 1;
//         // checking which is the suitable palace of key element
//         while (j >= 0 && a[j] > key) {
//             a[j + 1] = a[j];
//             j--;
//         }
//         // placing key element of his right place
//         a[j + 1] = key;
//     }
// }
// int main() {
//     int a[] = {10, 3, 2, 2, 7, 5};
//     int len = sizeof(a) / sizeof(a[0]);
//     print_array(a, len);
//     cout << endl;
//     insertion_sort(a, len);
//     print_array(a, len);
// }

// NUMBER 5 //
// #include <bits/stdc++.h>
// using namespace std;
// int binary(int a[], int lb, int ub, int target) {
//     int mid = (lb + ub) / 2;
//     if (lb > ub) return -1;
//     if (a[mid] == target) return mid;
//     else if (a[mid] < target) return binary(a, mid + 1, ub, target);
//     else return binary(a, lb, mid - 1, target);
// }
// int main() {
//     int a[] = {1, 2, 9, 11, 17, 24, 26, 31, 320, 45};
//     int len_a = sizeof(a) / sizeof(a[0]);

//     cout << binary(a, 0, len_a, 320);
//     cout << binary(a, 0, len_a, 45);
// } 

// NUMBER 6 //
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     // a[50][45]
//     // Row major Address:
//     //     a[6][13] = 760 + 4 * ((45 * 6) + 13) 
//     //              = 1043
//     //              = 1892
//     //  Colmun major Address:
//     //     a[6][13] = 760 + 4 * (6 + (13 * 50))
//     //              = 3384
    
// }
// NUMBER 7;
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// }

/*
    ------ Array Limition -------
    1. Static or fixed number of element can sotred into the arrya, example: you declare an array ar[10], you can not keep into the array over 10 element. otherwise linked list have no limit to keep element.
    2. waste of memory. suppose you deaclare an array ar[10] but you stored only 2 element into the array then other 8 element is waste of memory, but linked list is not so. linked dont waste memoryl
    3. array element adding and deletion process is so hard, otherwise elemenet insert into linked list any position is very easy
    4. array element stay in sequentially in the memory. that is not good sometimes, but linked list element is stay sequentially they ar linked by address with each other. 
*/ 

    
// #include <bits/stdc++.h>
// using namespace std;
// class Node {
//     public:
//         int value;
//         Node *next;
//         Node (int val) {
//             this->value = val;
//             this->next = NULL;
//         }
// };
// void print_node(Node *head) {
//     while(head != NULL) {
//         cout << head->value << " ";
//         head = head->next;
//     }
//     cout << endl;
// }
// int main() {
//     Node *first = new Node(5);
//     Node *second = new Node(7);
//     Node *third = new Node(1);
//     Node *fourth = new Node(14);
//     Node *fifth = new Node(3);
//     Node *sixth = new Node(11);
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = NULL;
//     int sum = 0;
//     Node *temp = first;
//     while(temp->value != 3) {
//         sum += temp->value;
//         temp = temp->next;
//     }
//     sum -= temp->value;
//     cout << sum << endl;
//     print_node(first);
// }
// All Answer;
/*
    1. Value of Head is 5;
    2. 1020 is In place of Question(?) markl
    2. 1020 is In place of Question(?) mark
    3. 1 is the value of Head->Next->Next->Value.
    4. 24 is total sum value.
*/ 


#include <bits/stdc++.h>
using namespace std;
  

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
  
        // Last i elements are already 
        
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
  
// Function to print an array 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
  

int main()
{
    int arr[] = { 6, 1, 4, 2, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}