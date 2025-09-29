#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;
public:
    Stack() {
        top = nullptr;
    }

    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << value << " berhasil di-push ke stack." << endl;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack kosong, tidak bisa pop." << endl;
            return;
        }
        Node* temp = top;
        cout << top->data << " di-pop dari stack." << endl;
        top = top->next;
        delete temp;
    }

    void display() {
        if (top == nullptr) {
            cout << "Stack kosong." << endl;
            return;
        }
        cout << "Isi stack: ";
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();

    s.display();

    return 0;
}
