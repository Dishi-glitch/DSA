/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        vector<pair<int, int>> result;
        if (!head) return result;

        Node *left = head;
        Node *right = head;

        while (right->next != nullptr) {
            right = right->next;
        }

        while (left != right && right->next != left) {
            int current_sum = left->data + right->data;

            if (current_sum == target) {
                result.push_back({left->data, right->data});
                left = left->next;
                right = right->prev;
            } 
            else if (current_sum < target) {
                left = left->next; // Needs a larger value to increase sum
            } 
            else {
                right = right->prev; // Needs a smaller value to decrease sum
            }
        }

        return result;
    }
};