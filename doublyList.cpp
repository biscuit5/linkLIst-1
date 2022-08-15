#include <bits/stdc++.h>
using namespace std;

class doublyNode
{

public:
    int val;
    doublyNode *prevs;
    doublyNode *next;
    doublyNode(int val)
    {
        this->val = val;
        prevs = NULL;
        next = NULL;
    }
};
void display(doublyNode* n)
{
    
    while (n != NULL)
    {
        cout << n->val;
        if (n->next != NULL)
            cout << " ->";
        n = n->next;
    }

    cout << endl
         << endl;
}
void reverseDisplayPrint(doublyNode* &head)
{
    doublyNode* tamp = head;
    while (tamp->next != NULL)
    {
        tamp = tamp->next;
    }
    

    while (tamp != NULL)
    {
        cout << tamp->val;
        if (tamp->prevs != NULL)
            cout << " ->";
        tamp = tamp->prevs;
    }

    cout << endl
         << endl;
}
int coutLength(doublyNode *&head)
{
    int count = 0;
    doublyNode *tamp = head ;
    while (tamp != NULL)
    {
        tamp = tamp->next;
        count++;
    }
    return count;
}
void insertionAthead(doublyNode *&head, int val)
{
    doublyNode *newNode = new doublyNode(val);
    head->prevs = newNode;
    newNode->next = head;
    head = newNode;
}

void insertionTel(doublyNode *&head, int val)
{
    doublyNode *newNode = new doublyNode(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    doublyNode *tamp = head;
    while (tamp->next != NULL)
    {
        tamp = tamp->next;
    }
    tamp->next = newNode;
    newNode->prevs = tamp;
}

int main()
{

    doublyNode *head = NULL;
    int value, position;
    cout << "choice to head insertion : 1" << endl
         << "choice to tail insertion : 2" << endl
         << "choice to tail insertion : 3" << endl
         << "exit doublyList : 0" << endl;

    int choice;
    cout << " next choice : ";
    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "do you want choice value : ";
            cin >> value;
         
            insertionAthead(head, value);
            break;
        case 2:
            cout << "do you want choice value : ";
            cin >> value;
            insertionTel(head, value);
            break;
        case 3:
        reverseDisplayPrint(head);
        break;
        default:
            break;
            
        }
        cout << " next choice: ";
            cin >> choice;
    }

    cout << "link list :  " << endl;
    display(head);
    cout << "length of list:  " << coutLength(head) << endl;
    return 0;
}