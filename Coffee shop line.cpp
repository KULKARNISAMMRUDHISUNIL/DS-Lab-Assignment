#include<iostream>
#define SIZE 10
using namespace std;
class coffee_shop {
    public:
        int token_queue[SIZE];
        int rear, front;

        coffee_shop() {
            rear = -1;
            front = -1;
        }

        int full() {
            if (rear == SIZE - 1) {
                return 1;
            } else {
                return 0;
            }
        }

        int empty() {
            if (front == -1 || front == SIZE || rear < front) {
                return 1;
            } else {
                return 0;
            }
        }

        void enqueue(int token_no) {
            if (full()) {
                cout << "Queue is full" << endl;
            } else {
                if (rear == -1)
                    front = 0;
                rear++;
                token_queue[rear] = token_no;
            }
        }

        int dequeue() {
            if (empty()) {
                cout << "Queue is empty" << endl;
                return 0;
            } else {
                int token_no = token_queue[front];
                front++; 
                return token_no;
            }
        }

        void display() {
            if (empty()) {
                cout << "Queue is empty!" << endl;
                return;
            }

            cout << "Current queue: ";
            for (int i = front; i <= rear; i++) {
                cout << token_queue[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    int token_no;
    int choice;
    char c;
    coffee_shop c1;

    do {
        cout << "-----WELCOME to COFFEE SHOP----\n1. Get token\n2. Process token\n3. Display queue\n4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                cout << "Enter token no: ";
                cin >> token_no;
                c1.enqueue(token_no);
                cout << "Token " << token_no << " added" << endl;
                break;
            }
            case 2: {
                token_no = c1.dequeue();
                if (token_no != 0) {
                    cout << "Token " << token_no << " processed" << endl;
                }
                break;
            }
            case 3: {
                c1.display();
                break;
            }
            case 4: {
                cout << "Exiting.....";
                return 0;
            }
            default:
                cout << "Invalid choice! Please select a valid option." << endl;
                break;
        }

        cout << "Do you want to continue (Y/N)? ";
        cin >> c;
    } while (c == 'Y' || c == 'y');

    return 0;
}




