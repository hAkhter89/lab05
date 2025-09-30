#include <iostream>
using namespace std;

class myStack {
    private:
        int size;
        int* arr;
        int topidx;

    public:
        myStack(int a);
        void push(int a);
        int pop();
        int top();
        bool isempty();
        ~myStack() {
            delete[] arr;
        }
};

myStack::myStack(int a){
    size = a;
    arr = new int[size];
    topidx = -1;
};
void myStack::push(int a) {
    if (topidx == size - 1) {
        return;
    }
    topidx++;
    arr[topidx] = a;

};
int myStack::pop() {
    if (topidx == -1) {
        return;
    }
    int popped = arr[topidx];
    topidx--;

    return popped;
};

int myStack::top() {
    if (topidx == -1) {
        return;
    }
    else return arr[topidx];

}


int main() {
    myStack stack(10);
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.pop();
}