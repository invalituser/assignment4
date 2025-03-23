#include<iostream>
using namespace std;
int a; int b; char A;
void func1(){
    cout << "enter a number: ";
    cin >> a; 
    cout << "enter a number: ";
    cin >> b;
    int sum = 0;
    for (int i = a; i <= b; i++ ){
        sum = sum + i;
    }
    cout << "The sum from " << a << " to " << b << " is: " << sum << endl;
}
void func2(){
    const int N = 20; //Number of fibonacci terms
    long long fib[N]; //Array to store Fibonacci number
    //First two fibonacci numbers 
    fib [0] = 0;
    fib [1] = 1;

    //Generate Fibonacci sequence
    for (int i = 2; i < N; i++){
        fib [i] = fib[i-1]+fib[i-2];
    }
    //Print fibonacci sequence
    cout << "First 20 Fibonacci numbers: \n";
    for (int i = 0; i < N; i++){
        cout << fib[i] << " ";
    }
}
void func3(){
   int number, sum = 0;
   cout << "enter your number: ";
   cin >> number;
   while(number > 0){
        int digit = number % 10;
        sum = sum + digit;
        number = number / 10;
   }
   cout << sum;
}
int main(){
    cout << "\n1.Program 1\n";
    cout << "\n2.Program 2\n";
    cout << "\n3.Program 3\n";
    cout << "choose a program: "; 
    cin >> A; 
    switch (A){
        case '1':
        func1();
        break;
        case '2':
        func2();
        break;
        case '3':
        func3();
        break;
    }
    
    return 0;
}