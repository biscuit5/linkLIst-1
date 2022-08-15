#include <bits/stdc++.h>
using namespace std;

// int main(){
//     string st1="abcd";
//     string st2 = "abcd";
//         if (st1==st2)
//         {
//             cout<<"yes"<<endl;
//         }
//         else{

//             cout<<"no"<<endl;
//         }

//     return 0;
// }

// itrator empliment;
// int main(){
//     string st = "abcdefghi";
//     for (auto it = st.rbegin(); it !=st.rend(); it++)
//     {
//             cout<<*it<<endl;
//     }

//     return 0;
// }

// insertion array ***;
// void printArray(int array[],int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout<<array[i]<<" ";
//     }

// }
// int main(){
//     int array[50];
//     int size;
//     cin>>size;
//     for (int i = 0; i < size; i++)
//     {
//         cin>>array[i];
//     }
//     cout<<"give the array size"<<endl;
//     printArray(array,size);
//     cout<<endl;
// int pos ,value;
// cout<<"give you any position: ";
// cin>>pos;
// cout<<"insertion value: ";
// cin>>value;
// if(pos<0 || pos>size){
//     cout<<"invalied a value";
// }
// else
// {
// insertion empliment
// for (int i = size - 1; i >=pos; i--)
// {
//    array[i+1] = array[i];

// }

// array[size] = array[pos];
// array[pos] =value;

// }
// cout<<"after insertion value :";
// printArray(array,size +1);

// deletetion empliment ***;

//     int pos;
//     cout<<" deletion the array : "<<endl;
//     cin>>pos;

//    if(size<0 || pos>size)
//    {
//         cout<<"this position invalied"<<endl;
//    }
//    else
//    {
//         if(pos==size-1) size--;
//         else
//         {
//             for (int i =pos-1; i <size; i++)
//             {
//                 array[i-1]=array[i];
//             }
//             size--;
//         }
//    }
//    cout<<"after ddeletion"<<endl;
//    printArray(array,size);

// }

// linear search****

// int main()
// {
//     int size;
//     cin >> size;
//     int array[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> array[i];
//     }
//     char c;
//     cout << "do you to search : ";
//     cin >> c;
//     while (toupper(c) == 'Y')
//     {
//         int checkValue;
//         cout << "please inter a value you seach: ";
//         cin >> checkValue;
//         int flag = 0;
//         for (int i = 0; i < size; i++)
//         {
//             if (array[i] == checkValue)
//             {
//                 flag = 1;
//                 cout << "index the" << i << "position" << i + 1 << endl;
//             }
//         }
//         if (flag == 0)
//         {
//             cout << "the value not found";
//         }
//         cout<<"do you want search again:(Y/N)";
//         cin>>c;
//     }

//     return 0;
// }

// binary search ***

// int binarySearch(int array[],int x,int lb,int ub){
//     if(lb<=ub){
//         int mid = (lb+ub)/2;
//         if(x==array[mid])return mid;
//         else if (x>array[mid]){
//             binarySearch(array,x,mid+1,ub);
//         }
//         else{
//              binarySearch(array,x,lb,mid-1);
//         }

//     }
//     else return -1;
// }

// int main()
// {
//     int size;
//     cin >> size;
//     int array[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> array[i];

//    }
//    int checkValue;
//    cout<<"please enter your number search you want: ";
//    cin>>checkValue;
//    int indexNumber;
//     indexNumber = binarySearch(array,checkValue,0,size-1);

//    if(indexNumber !=-1){
//         cout<<"index no "<< indexNumber<<"position "<<indexNumber+1<<endl;
//    }
//    else{
//         cout<<"not found";
//    }

//    return 0;

// }

// practics problem ****10.5-1

// int main(){
//     int n ;
//     cin>> n;
//     int array[n];
//     int sum=0;
//     for (int i = 0; i <n ; i++)
//     {
//         cin>>array[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         sum +=array[i];
//     }
//     cout<<"sum "<<sum<<endl;

// }

// bubble sort empliention

// void print_bubble(int array[] ,int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout<<" "<<array[i];
//     }

// }
// int main(){
//     int size;
//     cin>>size;
//     int array[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin>>array[i];

//     }
//     cout<<"before array print: ";
//     print_bubble(array,size);

//     // bubble empliention code
//     for (int i = 0; i < size; i++)
//     {
//         cout<<"bubble sort itretion no: "<<i<<endl;
//         int flag = 0;
//         for (int j = 0; j < size-i; j++)
//         {
//             if(array[j]>array[j+1]){
//                 int tamp=array[j];
//                 array[j]=array[j+1];
//                 array[j+1]=tamp;
//                 // flag =1;
//             }
//             print_bubble(array,size);
//             cout<<endl;
//         }

//         if(flag==0) break;
//     }
//     cout<<endl;
//     cout<<"after bubble sort: ";
//     print_bubble(array,size);
//     return 0;

// }

// insertion of array empliment***

// void print_insort(int array[],int size){
//     for (int i = 0; i < size; i++)
//     {
//        cout<<array[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int size;
//     cout<<"Enter a size of array: ";
//     cin>>size;
//     int array[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin>>array[i];
//     }
//     cout<<endl;
//     print_insort(array,size);
//     cout<<"before insertion : ";

// insertion empliement
//     for (int i = 1; i < size; i++)
//     {
//         int key=array[i];
//         int j =i-1;
//         while (array[j]>key && j>=0)
//         {
//             array[j+1]=array[j];
//             j--;
//         }
//         array[j+1]=key;

//     }

//     cout<<"before insertion : ";
//      print_insort(array,size);
//      cout<<endl;

//     return 0;
// }

// all array revision *** insertion

// void printArray(int array[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<array[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>array[i];
//     }
//     printArray(array,n);
//     cout<<endl;
//     int pos,value;
//     cout<<"please inter positon ";
//     cin>>pos;
//     cout<<"inter value ";
//     cin>>value;
//     if(pos<0 || pos>n){
//         cout<<"this position invalied ";
//     }
//     else{
//         //
//         array[n]= array[pos];
//          array[pos] = value;

//     }

//     cout<<"after array insertion ";
//     printArray(array,n+1);
//     cout<<endl;
//     return 0;
// }

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
//     printArray(array, n);
//     cout << endl;

//     int pos,value;
//     cout << "enter a pos deletion : ";
//     cin >> pos;
//     cout<<"enter the value deletion : ";
//     cin>>value;
//     if (pos < 0 || pos > n - 1)
//     {
//         cout << "invalied number :" << endl;
//     }
//     else
//     {
//         if (pos == n - 1)
//             n--;
//         else
//         {
//             for (int i = pos + 1; i < n; i++)
//             {
//                 array[i - 1] = array[i];

//             }
//              n--;
//         }
//     }
//     cout << "after deletion array ";
//     printArray(array, n);
//     cout << endl;
// }
// start lab exam
// problem slove number b **
// #include <bits/stdc++.h>
// using namespace std;
// using namespace std;
// #define MX 10005

// const int N = 100000;
// int data[N+10], save[4*N+10];
// int inf = 1 << 28;
// int n;

// void build_tree(int node, int st, int en, int a[], int A[])
// {
//     if(st==en)
//     {
//         A[node] = a[st];
//         return;
//     }
//     int mid = st+ ((en-st)>>1);
//     int left = node<<1;
//     int right = (node<<1)+1;
//     build_tree(left, st, mid, a, A);
//     build_tree(right, mid+1, en, a, A);
//     A[node] = min(A[left], A[right]);
// }
// int query_tree(int node, int st, int en, int a, int b, int A[])
// {
//     if(a>b)
//         return inf;

//     if(st==a && en==b)
//         return A[node];
//     int mid = st+ ((en-st)>>1);
//     int left = node<<1;
//     int right = (node<<1)+1;

//     int l = query_tree(left, st, mid, a, min(b, mid), A);
//     int r = query_tree(right ,mid+1, en, max(a, mid+1), b, A);
//     return min(l, r);
// }

// void Build(int tot)
// {
//     build_tree(1, 1, tot, data, save);
// }
// int query(int a, int b)
// {
//     return query_tree(1, 1, n, a, b, save);
// }

// int main()
// {
//     //freopen("in.txt", "r", stdin);
//     int test, t;
//     int q, a, b;
//     cin >> test;
//     for(t=1; t<=test; t++)
//     {
//         cin >> n >> q;
//         for(int i=1; i<=n; i++)
//              scanf("%d", &data[i]);
//         Build(n);
//         cout << "Case " << t  <<  ":" << endl;
//         for(int i=1; i<=q; i++)
//         {
//            scanf("%d %d", &a, &b);
//            printf("%d\n",  query(a, b));
//         }
//     }
//     return 0;
// }

// problem slove number g**

//    #include <iostream>
//   #include <cstdio>
//   #include <algorithm>
//   #include <cstring>
//   #include <string>
//   #include <cmath>
//   using namespace std;
//   #define ll long long
//   const int N=10005;
//  const int mod=1e9+7;
//  const int maxn=1e7;
//  int main()
//  {
//      int n;
//      while(cin>>n){
//          int a=n/100;
//          int b=(b-a*100)/10;
//          int c=n%10;
//          if(a==c) cout<<"Yes"<<endl;
//          else cout<<"No"<<endl;
//      }
//      return 0;
// }
// problem slove number h;;

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int pos1,pos2;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if(s[i]=='A'){
//             pos1 = i;

//             break;
//         }
//     }
//     for (int i = s.size()-1; i >=0; i--)
//     {
//         if (s[i]=='Z')
//         {

//             pos2=i;

//             break;
//         }

//     }
//     cout<<pos2-pos1+1<<"\n";

//     return 0;

// }

// problem c slove;

// #include<iostream>
// #include<cstdio>
// #include<algorithm>
// #include<cmath>
// #include<vector>
// #include<string>
// #include<cstring>

// using namespace std;
// int main(){
//     int t,n;
//     scanf("%d",&t) ;
//     for (int tc = 0; tc < t; tc++)
//     {
//         scanf("%d",&n);
//         int a[n];
//         int couter=0,l;
//         for (int j = 0; j < n; j++)
//         {
//             cin>>a[j];
//         }
//         sort(a,a+n);
//         int size = n/2;
//         while (a[size-2] !=a[size-1])
//         {
//             size=size/2;
//         }
//         for (int j =size-2 ; j < n; j++)
//         {
//            if (a[j]>a[size-1])
//            {
//                 couter =n-j+2;
//            }

//         }

//         cout<<couter<<endl;

//     }
//     return 0;

// }

// problem number e slove,,
// #include<bits/stdc++.h>
// #define mx 100005
// using namespace std;
// int arr[mx];
// int tree[mx*3];
// void init(int node,int b,int e)
// {
//     if(b==e){
//         tree[node]=arr[b];
//         return;
//     }
//     int left =node*2;
//     int right = node*2+1;
//     int mid=(b+e)/2;
//     init(left,b,mid);
//     init(right,mid+1,e);
//     tree[node]= tree[left]+tree[right];
// }
// int query(int node,int b,int e,int i, int j)
// {
//     if(b>j || e<i){
//         return 0;
//     }
//     if(b>=i && e<=j){
//         return tree[node];
//  }
//     int left =node*2;
//     int right = node*2+1;
//     int mid=(b+e)/2;
//     int q1=query(left,b,mid,i,j);
//     int q2=query(right,mid+1,e,i,j);
//      return q1+q2;
// }
// void update(int node,int b,int e,int i,int newvalue)
// {
//     if(i>e || i<b)
//         return;
//     if(b>=i && e<=i){
//         tree[node]=newvalue;
//         return;
//     }
//     int left =node*2;
//     int right = node*2+1;
//     int mid=(b+e)/2;
//     update(left,b,mid,i,newvalue);
//     update(right,mid+1,e,i,newvalue);
//     tree[node]= tree[left]+tree[right];
// }
// int main()
// {
//     int t,n,q,v,x,y,z;
//     scanf("%d",&t);
//     for(int i=1;i<=t;i++)
//     {
//         printf("Case %d:\n",i);
//         scanf("%d %d",&n,&q);
//         for(int j=0;j<n;j++){
//             scanf("%d",&arr[j]);
//         }
//             init(1,0,n-1);
//         for(int k=0;k<q;k++)
//         {
//             scanf("%d",&x);
//             if(x==1)
//             {
//                 scanf("%d",&y);
//                 printf("%d\n",arr[y]);
//                 arr[y]=0;
//                 update(1,0,n-1,y,0);
//             }
//             else if(x==2)
//             {
//                 scanf("%d %d",&y,&z);
//                 arr[y]+=z;
//                 update(1,0,n-1,y,arr[y]);
//                 //printf("%d\n",ans);
//             }
//             else
//             {
//                 scanf("%d %d",&y,&z);
//                 int ans=query(1,0,n-1,y,z);
//                 printf("%d\n",ans);
//             }
//         }
//     }
//     return 0;
// }

// problem number A slove;

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int coute= 0;
//     int arr[3];
//     for (int i = 0; i <3; i++)
//     {
//         cin>>arr[i];
//         if (arr[i]>=10)
//         {
//             coute++;
//         }

//     }
//     cout<<coute<<endl;
//     return 0;
// }

// problem number F slove
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int couter = 0;
//     int a,b,c;
//     cin>>a>>b>>c;
//     if (a !=b)
//     {
//         couter++;
//     }
//      if(b !=c){
//         couter++;
//     }
//     if (c !=a)
//     {
//         couter++;
//     }
//     if (a==b && b==c && c==a)
//     {
//         cout<<"1";
//         return 0;
//     }

//     cout<<couter<<endl;

//     return 0;

// }

// counting sort empliment //

// void printArray(int array[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<array[i]<<" ";
//     }

// }
// int main(){
//     int size;
//     cin>> size;
//     int array[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin>>array[i];
//     }
//     cout<<"before sorting : ";
//     printArray(array,size);

//     int max= INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         if (array[i]>max)
//         {
//             max=array[i];
//         }

//     }
//     int count[max+1];
//     for (int i = 0; i <=max; i++)
//     {
//         count[i]=0;
//     }
//     // FREEQUNCY EMPLIMENT
//     for (int i = 0; i <size; i++)
//     {
//        count[array[i]]++;
//     }
//     // CUMULATIVE SUM
//     for (int i = 1; i <=max; i++)
//     {
//         count[i] +=count[i-1];
//     }
//     // final printARRAY;
//     int final[size];
//     for (int i = size-1; i >=0; i--)
//     {
//         count[array[i]]--;
//         int k=count[array[i]];
//         final[k] =array[i];
//     }

//     cout<<"after sorting : ";
//     printArray(final,size);

//     return 0;
// }

// link listed ;;
class Node
{

public:
    int value;
    Node *Next;

    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};
struct Test
{
    int position[1000];
};

void insertionTel(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}

void insertionAthead(Node *&head, int val)
{

    Node *newNode = new Node(val);
    newNode->Next = head;
    head = newNode;
}

void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->Next != NULL)
            cout << " ->";
        n = n->Next;
    }

    cout << endl
         << endl;
         
}

int coutLength(Node *&head)
{
    int count = 0;
    Node *tamp = head;
    while (tamp != NULL)
    {
        tamp = tamp->Next;
        count++;
    }
    return count;
}
void insertionAtSpecificPosition(Node *&head, int pos, int val)
{
    int i = 0;
    Node *tamp = head;
    while (i < pos - 2)
    {
        tamp = tamp->Next;
        i++;
    }
    Node *newNode = new Node(val);
    newNode->Next = tamp->Next;
    tamp->Next = newNode;
}
int searchUniqueNumber(Node *&head, int key)
{
    Node *tamp = head;
    int count = 1;
    if (tamp == NULL)
    {
        return -1;
    }
    while (tamp->value != key)
    {
        if (tamp->Next == NULL)
        {
            return -1;
        }
        tamp = tamp->Next;
        count++;
    }
    return count;
}
void searchDuplicateValue(Node *&head, int key)
{
    Node *tamp = head;
    int count = 1;
    int size;
    size = coutLength(head);
    int position[size + 1], k = 1;
    int flag = 0;
    while (tamp != NULL)
    {
        if (tamp->value == key)
        {
            flag = 1;
            position[k] = count;
            k++;
        }

        tamp = tamp->Next;
        count++;
    }
    if (flag == 0)
        cout << "the number not yet at position list" << endl;
    else
    {
        position[0] = k;
        cout << "the value is found at position";
        for (int i = 1; i < position[0]; i++)
        {
            cout << position[i];
            if (i < position[0] - 1)
                cout << " ,";
        }
    }
    cout << endl;
}
Test searchaDuplicatValueReturn(Node *&head, int key)
{
    Node *tamp = head;
    int count = 1;
    Test T;
    int k = 1;

    while (tamp != NULL)
    {
        if (tamp->value == key)
        {

            T.position[k] = count;
            k++;
        }

        tamp = tamp->Next;
        count++;
    }
    T.position[0] = k;

    return T;
    cout << endl;
}
void searchUniqueNumber(Node *&head, int searchValue, int value)
{
    // step1:search position and searchValue;
    int position;
    position = searchUniqueNumber(head, searchValue);
    // step2:insertion the value position+1
    insertionAtSpecificPosition(head, position + 1, value);
}
void deletionAtHead(Node *&head)
{
    Node *tamp = head;
    if (tamp != NULL)
    {
        head = tamp->Next;
        delete tamp;
    }
    else
    {
        cout << "there are no value in head" << endl;
    }
}
void deletionAtTail(Node *&head)
{
    Node *tamp = head;
    if (tamp != NULL && tamp->Next != NULL)
    {
        while (tamp->Next->Next != NULL)
        {
            tamp = tamp->Next;
        }
        Node *deleNode = tamp->Next;
        tamp->Next = NULL;
        delete deleNode;
    }
    else
    {
        if (tamp == NULL)
        {
            cout << "there are no value in head" << endl;
        }

        else
            deletionAtHead(head);
    }
}
void deletionAtSpecificPostion(Node *&head, int position)
{
    Node *tamp = head;
    if (position <= coutLength(head))
    {
        if (position == 1)
        {
            deletionAtHead(head);
        }
        else if (position == coutLength(head))
        {
            deletionAtTail(head);
        }
        else
        {
            int i;
            while (i < position - 1)
            {
                tamp = tamp->Next;
                i++;
            }
            Node *delNode = tamp->Next;
            tamp->Next = delNode->Next;
            delete delNode;
        }
    }
    else
    {
        cout << "position out of ranges " << endl;
    }
}
void deletionAtUniqoueNumber(Node* &head,int value){
    int position;
    position=searchUniqueNumber(head,value);

    if (position == -1)
    {
        cout<<"the value not found link list"<<endl;

    }
    else{
        deletionAtSpecificPostion(head,value);
    }
    
}
Node* reverseNoneRecursive(Node *&head){
    Node *prevs = NULL;
    Node *current = head;
    if (head == NULL)
    {
        cout<<"The link list empty"<<endl;
       return head;
    }
    
    Node *next = head->Next;

    while (true)
    {
        current->Next = prevs;
        prevs = current;
        current = next;
        if (current==NULL)
        
           break;
       
        next=next->Next;
        
       
    }
    
    
    return prevs; 

}
Node *reverseRecursive(Node* &head){
    // Base call 
    if (head == NULL || head->Next== NULL)
    {
        if (head == NULL)
        {
            cout<<"there are link list is empty"<<endl;
        }
        return head;
    }
    Node* newNode = reverseRecursive(head->Next);
    head->Next->Next = head;
    head->Next = NULL;
    return newNode;
    
}
int findMid(Node* &head){
    Node  *fast = head;
    Node *slow = head;
    if(head==NULL){
        return -1;
    }
    while (fast != NULL && fast->Next != NULL)
    {
        slow = slow->Next;
        fast = fast->Next->Next;
    }
    return slow->value;
    
}
void makeCycle(Node* &head , int position){
    Node* tamp = head;
    Node* standNode;
    int count = 1;
    while (tamp->Next !=NULL)
    {
        if(count==position) standNode=tamp;
        tamp=tamp->Next;
        count++;
    }
    tamp->Next = standNode;
}
bool detectCycle(Node* &head){
    Node *slow = head;
    Node *fast = head;
    while (fast !=NULL && fast->Next !=NULL)
    {
        slow = slow->Next;
        fast = fast->Next->Next;
        if(slow->Next==fast->Next){
            return true;
        }
    }
    
    return false;

}
int main()
{
    Node *head = NULL;

    int n;

    cout << "choice to head insertion : 1" << endl
         << "choice to tail insertion : 2" << endl
         << "insertion at specific position : 3" << endl
         << "search at unique number position : 4" << endl
         << "search at duplicate  number position : 5" << endl
         << "insertion searchBy value unique  position : 6" << endl
         << "deletion at head value :7 " << endl
         << "deletion at tail value : 8" << endl
         << "deletion at the specificPosition value : 9" << endl
         << "deletion at the unique number  value : 10" << endl
         << "reverse the link list None recursive away : 11" << endl
         << "find link list mid point  : 12" << endl
         << "make cycle in the link list  : 13" << endl
         << "make dectectcycle in the link list  : 14" << endl
         << "exit the code: 0"
         << endl
         << endl;
    int choice, pos;

    cout << "next choice : ";
    cin >> choice;
    while (choice != 0)
    {

        switch (choice)
        {
        case 1:
            cout << "do you want choice value : ";
            cin >> n;
            insertionAthead(head, n);
            break;
        case 2:
            cout << "do you want choice value : ";
            cin >> n;
            insertionTel(head, n);
            break;
        case 3:
            cout << "desired the position : ";
            cin >> pos;
            cout << "do you want choice value : ";
            cin >> n;
            insertionAtSpecificPosition(head, pos, n);
            break;
        case 4:
            cout << "enter a search unique value : ";
            cin >> n;
            pos = searchUniqueNumber(head, n);
            if (pos != -1)
            {
                cout << "value at positon : " << pos << endl;
            }
            else
            {
                cout << "the number not yet at position list" << endl;
            }
            break;
        case 5:
            cout << "enter a search duplicate value : ";
            cin >> n;
            Test T;
            T = searchaDuplicatValueReturn(head, n);
            if (T.position[0] == 1)
            {
                cout << "the number not yet at position list" << endl;
            }
            else
            {
                int size = T.position[0];
                cout << "the value is found at position: ";
                for (int i = 1; i < size; i++)
                {
                    cout << T.position[i];
                    if (i < size - 1)
                        cout << " ,";
                }
                cout << endl;
            }

            // if (pos != -1)
            // {
            //    cout<<"value at positon : "<<pos<<endl;
            // }
            // else{
            //     cout<<"the number not yet at position list"<<endl;
            // }
            break;
        case 6:
            cout << "Enter search by value : ";
            int searchValue;
            cin >> searchValue;
            cout << "Enter the value insert: ";
            cin >> n;
            searchUniqueNumber(head, searchValue, n);
            break;
        case 7:
            deletionAtHead(head);
            break;
        case 8:
            deletionAtTail(head);
            break;
        case 9:
            if(head==NULL){
                cout<<"there are value out of link list"<<endl;
            }
            cout << "desired the position : ";
            cin >> pos;
            deletionAtSpecificPostion(head, pos);
            
            break;
        case 10:
         cout << "Enter search by ddlete : ";
            int deletValue;
            cin >> deletValue;
            deletionAtUniqoueNumber(head,deletValue);
        break;
        case 11:
        head = reverseRecursive(head);
        break;
        case 12:
        int mid;
        mid = findMid(head);
        if(mid == -1){
            cout<<"link list is empty"<<endl;
        }
        else cout<<"link list mid :"<<mid<<endl;
        
        break;
        case 13:
        cout<<"enter the desert position detectcycle : ";
        cin>> pos;
        makeCycle(head,pos);
        break;
        case 14:
        bool standCycle;
        standCycle = detectCycle(head);
        if(standCycle==true){
            cout<<"there is cycle link list "<<endl;

        }
        else{
            cout<<"there no cycle link list "<<endl;
        }
        default:
            break;
        }

        cout << "next choice : ";
        cin >> choice;
    }

    // insertionTel(head,1);
    // insertionTel(head,5);
    // insertionTel(head,8);
    // insertionTel(head,9);
    // insertionTel(head,10);
    // Node* second=new Node();
    // Node*  third=new Node();
    // Node* fourth=new Node();

    // head->value  = 1;
    // second-> value=5;
    // third-> value=8;
    // fourth-> value=9;

    // head->Next = second;
    // second->Next = third;
    // third->Next =fourth;
    // fourth->Next = NULL;
    cout << "link list :  " << endl;
    display(head);
    cout << "length of list:  " << coutLength(head) << endl;
    return 0;
}