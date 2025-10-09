#include <bits/stdc++.h>
using namespace std;

typedef struct ll
{
    struct ll *next;
    int data;
} ll;

ll* add_node_to_ll(ll *head, int data)
{
    ll *temp = head;
    ll *node = (ll*)malloc(sizeof(ll));
    node->data = data;
    node->next = NULL;
    if (temp == NULL)
    {
        return node;
    }
    while(temp->next)
    {
        temp = temp->next;
    }
    temp->next = node;
    return head;
}

void print_all_nodes_in_ll(ll* head)
{
    ll* temp = head;
    while(temp)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

bool is_cycle(ll* head)
{
    ll* slow = head;
    ll* fast = head;

    while(fast)
    {
        slow = slow->next;
        fast = fast->next;
        if (fast)
        {
            fast = fast->next;
        }

        if ((slow == fast) && (head->next != NULL))
        {
            return true;
        }
    }

    return false;
}

ll* add_link_in_ll(ll* head, int index)
{
    ll* temp = head;
    ll* end_node = head;

    while(end_node->next)
    {
        end_node = end_node->next; 
    }

    while(temp && index)
    {
        index--;
        temp=temp->next;
    }

    end_node->next = temp;

    return head;
}
int main() {
    // Write this Optionally, if you are taking input from file(input.txt) and putting it to a file(output.txt)
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //
    
    int n;
    cin>>n;

    ll *data_ll = NULL;

    for (int i=0; i<n; i++)
    {
        int x;
        cin>>x;

        data_ll = add_node_to_ll(data_ll, x);
    }

    int index;
    cin>>index;

    if (index)
    {        
        data_ll = add_link_in_ll(data_ll, index);
    }

    if (is_cycle(data_ll))
    {
        cout<<"Cycle exist"<<endl;
    }
    else
    {
        print_all_nodes_in_ll(data_ll);
        cout<<"Cycle doesnt exist"<<endl;
    }
    return 0;
}