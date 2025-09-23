#include <iostream>
using namespace std;
/*
 Simple Task Scheduler:
 Write a program that implements a simple task scheduler using a singly linked list. Each
  node in the linked list represents a task with its priority and execution time. Tasks are 
  scheduled based on their priority, with higher priority tasks being executed first.
*/

class Node {
public:
    string task_name;
    int priority;
    int exe_time;
    Node* next;

    Node(string tn, int p, int e) {
        task_name = tn;
        priority = p;
        exe_time = e;
        next = NULL;
    }

    void display() {
        cout << "Task name: " << task_name << endl;
        cout << "Priority: " << priority << endl;
        cout << "Execution time: " << exe_time << "s" << endl;
    }
};

int main() {
    cout<<"NAME: Sammrudhi Kulkarni\nPRN: B24CE1125\n";
    Node* head = NULL;
    int n;
    string tn;
    int p, e;

    cout << "Enter number of tasks: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter task name: ";
        cin >> tn;
        cout << "Enter task priority : ";
        cin >> p;
        cout << "Enter execution time (in seconds): ";
        cin >> e;

        Node* temp = new Node(tn, p, e);

        if (head == NULL || head->priority < temp->priority) {
            temp->next = head;
            head = temp;
        }
        else {
            Node* prev = head;
            Node* current = head->next;

            while (current != NULL && current->priority >= temp->priority) {
                prev = current;
                current = current->next;
            }

            prev->next = temp;
            temp->next = current;
        }
    }

    // Display the priority list
    cout << "\n-------------------------------------------\n";
    cout << "The Priority List is:\n\n";
    Node* t = head;
    while (t != NULL) {
        t->display();
        cout<<"The task "<<t->task_name<<" with priority "<<t->priority<<" is been scheduled by the scheduler"<<endl;
        cout << "---------------------\n";
        t = t->next;
    }

    return 0;
}

