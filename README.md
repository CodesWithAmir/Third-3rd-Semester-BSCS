# Third Semester BSCS DSA

C++ programs and lab exercises for the third-semester Data Structures and Algorithms course.

## Navigation

- [Arrays and searching](Lab-Lecture%201/Array/)
- [Sorting](Lab-Lecture%201/Sorting/)
- [Assignments](Lab-Lecture%201/Assignment/)
- [Singly linked list](Lab-Lecture%201/Linked%20List/)
- [Doubly linked list](Lab-Lecture%201/Doubly%20Linked%20List/)
- [Circular linked list](Lab-Lecture%201/Circular%20Linked%20List/)
- [Queue](Lab-Lecture%201/Queue/)
- [Dynamic queue](Lab-Lecture%201/Dynamic%20Queue/)
- [Stack](Lab-Lecture%201/Stack/)
- [Dynamic stack](Lab-Lecture%201/Dynamic%20Stack/)

## Project Map

### Arrays and Sorting

- Array allocation, linear search, and binary search
- Bubble sort, selection sort, and insertion sort
- Sorting combined with binary search

### Linked Lists

- Singly linked list insertion, deletion, traversal, and sorted insertion
- Doubly linked list operations
- Circular linked list starter implementation

### Queues and Stacks

- Array-based templated queue
- Dynamic linked-list queue
- Array-based integer and character stacks
- Dynamic linked-list stack

### Assignments

- Operator precedence and associativity
- Infix-to-postfix conversion
- Infix-to-prefix conversion
- Written logic and answer files for each question

## Compile and Run

Run commands from the repository root with `g++`:

```powershell
g++ -std=c++11 "Lab-Lecture 1/Assignment/Assignment_1_main.cpp" -o assignment.exe
.\assignment.exe
```

Other complete menu-driven programs include:

```powershell
g++ -std=c++11 "Lab-Lecture 1/Dynamic Queue/Dynamic_Queue_main.cpp" -o dynamic-queue.exe
g++ -std=c++11 "Lab-Lecture 1/Dynamic Stack/Dynamic_Stack_main.cpp" -o dynamic-stack.exe
```

Compile one source file at a time. Header files contain class implementations and are normally included by their corresponding `main.cpp` file.

## Requirements

- A C++ compiler with C++11 or later support
- A terminal or IDE for compiling and running the exercises

## Audit Status

Audit performed on October 21, 2026. No source-code changes were made during the audit. The assignment programs and built-in conversion examples pass syntax and smoke checks. The following issues still need code fixes:

### Build blockers

1. `Codes By Professor/Binaray Search Algorithum.cpp` contains non-breaking-space bytes in code indentation. Replace them with ordinary ASCII spaces.
2. `Queue/Queue_main.cpp` declares `templateQueue<int> + q(size);`. Remove the `+` so it constructs `templateQueue<int> q(size);`.
3. `Doubly Linked List/DLinkedList main.cpp` includes `DNode.h` directly and indirectly. Add an include guard to `DNode.h` or remove the duplicate include.
4. `Stack/Char_Stack_Header.h` has non-breaking spaces, a `CharStack`/`charStack` naming mismatch, a member named `top` that conflicts with `top()`, missing string support, malformed expressions, and inconsistent `Push`/`Pop`/`TOP` names. Normalize the class API and complete the conversion function.

### Linked-list and circular-list defects

1. `Linked List/LinkedList_Header.h` creates a node in `insertAfter` but never assigns `curr->next = newNode`. Link the node before returning.
2. `insertSorted` allocates `newNode` before cases that call another insertion method, causing leaks. Allocate only in the middle-insertion case.
3. `insertSorted` can dereference `curr` when the new value equals the tail value. Handle equality and stop the traversal before `curr` becomes null.
4. `Circular Linked List/CLinkedList.h` declares several methods without definitions and has no destructor. Implement every declared operation, free all nodes, and add a circular-list traversal guard.
5. Circular `insertAfter` reports a missing value incorrectly when traversal stops at the last node. Test the value after completing one full cycle, independently of `curr->next`.
6. Add include guards to every reusable node/list header. The project currently has 21 headers and several can be included more than once.

### Doubly-linked-list defects

1. `insertAtTail` assigns `head=tail=0` for an empty list instead of assigning the new node. Use `head=tail=newNode`.
2. `insertBefore` treats a matching tail value as `insertAtTail`, which places the new node after the target. Handle the tail like any other target or insert directly before it.
3. `reverseTriverseList` is declared but not implemented. Define it or remove the declaration.
4. The current driver only prints menu labels and does not execute list operations. Add the input loop and dispatch each menu choice.

### Stack and queue safety

1. The older `Stack/head.h` implementation has a `top` field/function collision and should use one consistent name and capitalization scheme.
2. Dynamic stack and queue classes own raw pointers but have compiler-generated copy operations. Delete copying or implement deep copy to prevent double-free errors.
3. Validate sizes before allocation. Zero or negative queue/stack sizes can cause invalid allocation or modulo-by-zero behavior.
4. Check `cin` after every numeric read. Clear the stream and discard invalid input so menu loops cannot repeat forever on bad input.

### Expression conversion limitations

1. The assignment converter treats each alphanumeric character as one operand, so names such as `value10` and multi-digit numbers are not parsed as single operands. Tokenize operands if multi-character expressions are required.
2. Reject unsupported characters and report mismatched parentheses instead of silently producing output.
3. Use `isalnum(static_cast<unsigned char>(current))` to avoid undefined behavior for signed non-ASCII characters.

### Project hygiene

- Generated `.exe` and `.gch` files are ignored by `.gitignore`; do not commit them.
- Variable-length arrays used by some exercises are not standard C++. Prefer `std::vector` or managed dynamic storage for portable C++11 builds.
- Several folders contain duplicate implementations of the same data structure. Keep one canonical implementation per structure and make demos include it.
- Empty legacy folders and removed examples are not listed in the navigation above.

## Repository

<https://github.com/CodesWithAmir/Third-3rd-Semester-BSCS>