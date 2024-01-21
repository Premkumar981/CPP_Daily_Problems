#include <iostream>

class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int value) : data(value), next(nullptr) {}
};

void insertNode(ListNode*& head, int value) {
    if (head == nullptr) {
        head = new ListNode(value);
    } else {
        ListNode* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = new ListNode(value);
    }
}

void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    ListNode* head = nullptr;
    int value;
    while (true) {
        std::cin >> value;
        if (value == -1) {
            break;
        }
        insertNode(head, value);
    }
    printList(head);
    ListNode* current = head;
    while (current != nullptr) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }
    return 0;
}
