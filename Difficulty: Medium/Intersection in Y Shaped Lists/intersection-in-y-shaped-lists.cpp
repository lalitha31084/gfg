/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        Node* p1 = head1;
        Node* p2 = head2;

        while (p1 != p2) {
            if (p1 == NULL)
                p1 = head2;
            else
                p1 = p1->next;
    
            if (p2 == NULL)
                p2 = head1;
            else
                p2 = p2->next;
        }
        return p1;
        
    }
};