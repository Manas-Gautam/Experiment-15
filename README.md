# Experiment-15
## Theory: - 
**Recursion in C++** is a programming technique where a function calls itself to solve a problem. The key idea behind recursion is to break a problem down into smaller instances of the same problem, with a base case that ends the recursive calls. Recursive functions are used in scenarios where the problem can be divided into similar sub-problems, like tree traversals, factorial calculation, Fibonacci sequence generation, etc.

### Key Concepts of Recursion in C++:

1. **Base Case**: 
   - A condition that stops the recursion. Without a base case, recursion would lead to an infinite loop.
   
   Example:
   ```cpp
   if (n == 0) return 1;  // Base case for factorial function
   ```

2. **Recursive Case**: 
   - The part of the function where the function calls itself with a modified argument that progresses toward the base case.
   
   Example:
   ```cpp
   return n * factorial(n - 1);  // Recursive call in the factorial function
   ```

3. **Stack Frame**: 
   - Every time a recursive function is called, a new frame is pushed onto the call stack. Each frame holds its own set of local variables and arguments. The base case ensures that recursion eventually ends, and then the stack unwinds.

4. **Tail Recursion**: 
   - A special form of recursion where the recursive call is the last statement in the function. This allows some compilers to optimize the recursion to avoid excessive stack usage.
   
   Example:
   ```cpp
   int tail_recursive_factorial(int n, int result = 1) {
       if (n == 0) return result;
       return tail_recursive_factorial(n - 1, n * result);
   }
   ```

5. **Direct vs. Indirect Recursion**:
   - **Direct recursion** occurs when a function calls itself directly.
   - **Indirect recursion** occurs when a function calls another function, and eventually, the second function calls the first one back, forming a recursive loop.

### Example: Factorial Using Recursion
```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;  // Base case
    return n * factorial(n - 1);  // Recursive call
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
```
In this example, the `factorial` function calls itself with a decremented value of `n` until it reaches 0, where it stops (base case).

### Advantages of Recursion:
- It makes code cleaner and easier to understand when solving problems that naturally fit the recursive structure, such as tree traversal or divide-and-conquer algorithms.
- It reduces complex problems into simpler sub-problems.

### Disadvantages of Recursion:
- Can lead to excessive memory use due to the call stack, especially if not properly optimized.
- It may cause a stack overflow if the recursion depth is too large or if the base case is missing.
- Iterative solutions are often more efficient in terms of space and time.

### Common Problems Solved Using Recursion:
- Factorial calculation
- Fibonacci sequence
- Binary search
- Tree traversals (inorder, preorder, postorder)
- Tower of Hanoi
- Permutation generation

Recursion is a powerful tool but should be used carefully to avoid inefficiencies or potential infinite loops due to missing base cases.

## Experiment 15{A}: - Find factorial of a number using recursion. 

## Code: - 

#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "The factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}

## Output: - 

![image](https://github.com/user-attachments/assets/af259a74-68bc-4f19-b82a-de93748403ef)

## Experiment 15{B}: - Find Fibonacci number in the Fibonacci sequence using recursion.

## Code: - 

#include<iostream>
using namespace std;

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    } else {
        return (fib(n - 1) + fib(n - 2));
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << n << "th Fibonacci number in Fibonacci Sequence is : " << fib(n) << endl;
    return 0;
}

## Output: - 

![image](https://github.com/user-attachments/assets/d2d4135b-a94f-46d5-90a4-cc02b1531855)

## Experiment 15{C}:- Find sum of n natural numbers using recursion, n is the value entered by user.

## Code: - 

#include<iostream>
using namespace std;

int sum(int n) {
    if (n == 0) {
        cout << "Number should be greater than 1" << endl;
    }
    if (n == 1) {
        return 1;
    } else {
        return (n + sum(n - 1));
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of numbers from 1 to " << n << " is: " << sum(n) << endl;
    return 0;
}
.
## Output: - 

![image](https://github.com/user-attachments/assets/4bb66cb9-9e3a-4a43-824d-5bc0197dcd37)

# Conclusion: - 
In conclusion, recursion in C++ is a powerful technique for solving problems that can be broken down into smaller, similar sub-problems. By defining a clear base case and making recursive calls, complex tasks like factorials, Fibonacci sequences, and tree traversals can be solved elegantly. However, while recursion simplifies code in certain scenarios, it comes with trade-offs such as higher memory usage and potential stack overflow issues. Understanding both its advantages and limitations allows programmers to use recursion effectively and efficiently when appropriate.

