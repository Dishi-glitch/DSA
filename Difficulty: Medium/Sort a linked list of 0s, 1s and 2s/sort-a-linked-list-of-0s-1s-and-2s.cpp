/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        int zero = 0, one = 0, two = 0;

        Node* temp = head;

        while (temp != NULL) {
            if (temp->data == 0)
                zero++;
            else if (temp->data == 1)
                one++;
            else
                two++;

            temp = temp->next;
        }

        temp = head;

        while (zero--) {
            temp->data = 0;
            temp = temp->next;
        }

        while (one--) {
            temp->data = 1;
            temp = temp->next;
        }

        while (two--) {
            temp->data = 2;
            temp = temp->next;
        }

        return head;
    }
};