class Solution {
public:
Node* merge(Node* a, Node* b)
{
    if (a == nullptr)
        return b;
    if (b == nullptr)
        return a;

    Node* result;
    if (a->data < b->data)
    {
        result = a;
        result->bottom = merge(a->bottom, b);
    }
    else
    {
        result = b;
        result->bottom = merge(a, b->bottom);
    }

    return result;
}
    Node *flatten(Node *head)
    {
           if (head == nullptr || head->next == nullptr)
        return head;

    // merge two sub-lists
    return merge(head, flatten(head->next));// Your code here


    }
};
