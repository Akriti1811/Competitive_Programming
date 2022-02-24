/*
Add 1 to a number represented as linked list 
A number N is represented in Linked List such that each digit corresponds to a node in linked list. You need to add 1 to it.
Example 1:
Input:
LinkedList: 4->5->6
Output: 457 
Example 2:
Input:
LinkedList: 1->2->3
Output: 124 
Your Task:
Your task is to complete the function addOne() which takes the head of the linked list as the only argument and returns the head of the modified linked list. The driver code prints the number.
Note: The head represents the left-most digit of the number.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
Constraints:
1 <= N <= 101000
*/

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 
class Solution
{
    public:
    void reverse(Node *&head)
    {
        Node *curr=head;
        Node *prev=NULL;
        Node *next=head;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }
    Node* addOne(Node *head) 
    {
        reverse(head);
        Node *curr=head;
        int carry=1,sum=0,rem=0;
        while(curr->next!=NULL)
        {
            sum=curr->data+carry;
            rem=sum%10;
            carry=sum/10;
            curr->data=rem;
            curr=curr->next;
        }
        sum=curr->data+carry;
        rem=sum%10;
        carry=sum/10;
        curr->data=rem;
        if(carry!=0)
        {
            Node *temp= new Node(carry);
            curr->next=temp;
        }
        reverse(head);
        return head;
       
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 