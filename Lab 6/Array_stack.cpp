#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

int stack[10], n = 10, top = -1;

void Push(int val){
    if (top >= n-1){
        cout << "Stack Overflow";
    }
    else{
        top +=1;
        stack[top] = val;
    }
}
void Pop(){
    if (top == -1){
        cout << "Stack Underflow"; 
    }
    else{
        //cout << "Poped value is " << stack[top]<<endl;
        top--;
    }
}
void Display(){
    if(top >= 0){
        for(int i = top; i >= 0 ; i-- ){
            cout << stack[i]<<" ";
        }
        cout << endl;
    }
    else{
        cout << "Stack is empty"<<endl;
    }
}

int main() {
    auto start_time = high_resolution_clock::now();
    Push(8);
    Push(10);
    Push(11);
    Push(15);
    Push(23);
    Push(6);
    Push(18);
    Push(20);
    Push(17);
    Display();
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    Display();
    Push(4);
    Push(30);
    Push(1);
    Display();
    auto end_time = high_resolution_clock::now();
    auto execution_time = duration_cast<microseconds>(end_time - start_time);
    cout << "Execution time: " << execution_time.count() << " us" << endl;
    return 0;
}
