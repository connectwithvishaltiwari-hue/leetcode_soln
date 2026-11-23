
class MyLinkedList {
    class Node {
    public:
        int data;
        Node* next;

        Node(int val) {
            data = val;
            next = nullptr;
        }
    };

    Node* head;
    Node* tail;
    int size;

public:
    MyLinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    // Get value at index
    int get(int index) {
        if (index < 0 || index >= size)
            return -1;

        Node* temp = head;

        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }

        return temp->data;
    }

    // Insert at beginning
    void addAtHead(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }

        size++;
    }

    // Insert at end
    void addAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }

        size++;
    }

    // Insert at given index
    void addAtIndex(int index, int val) {
        if (index < 0)
            index = 0;

        if (index > size)
            return;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        if (index == size) {
            addAtTail(val);
            return;
        }

        Node* temp = head;

        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }

        Node* newNode = new Node(val);

        newNode->next = temp->next;
        temp->next = newNode;

        size++;
    }

    // Delete node at given index
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size)
            return;

        if (index == 0) {
            Node* del = head;
            head = head->next;

            delete del;
            size--;

            if (size == 0)
                tail = nullptr;

            return;
        }

        Node* temp = head;

        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }

        Node* del = temp->next;
        temp->next = del->next;

        if (del == tail)
            tail = temp;

        delete del;
        size--;
    }
};
