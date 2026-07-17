/* Structure of linked list Node
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
class myStack {
    Node* top;
    int cnt;

public:
    myStack() {
        top = NULL;
        cnt = 0;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void push(int x) {
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;
        cnt++;
    }

    void pop() {
        if (isEmpty())
            return;

        Node* temp = top;
        top = top->next;
        delete temp;
        cnt--;
    }

    int peek() {
        if (isEmpty())
            return -1;

        return top->data;
    }

    int size() {
        return cnt;
    }
};