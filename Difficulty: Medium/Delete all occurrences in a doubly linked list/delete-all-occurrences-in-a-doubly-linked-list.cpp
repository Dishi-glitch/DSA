/* a Node of the doubly linked list
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:

    Node* deleteAllOccurOfX(Node* head, int x) {

        Node* curr = head;

        while (curr != NULL) {

            if (curr->data == x) {

                if (curr == head) {
                    head = head->next;
                }

                if (curr->prev != NULL) {
                    curr->prev->next = curr->next;
                }

                if (curr->next != NULL) {
                    curr->next->prev = curr->prev;
                }

                Node* temp = curr;
                curr = curr->next;
                delete temp;
            }
            else {
                curr = curr->next;
            }
        }

        return head;
    }
};