# Standard Template Libraries in C++

# What are STL?

The STL is a collection of reusable components built using templates.

Instead of writing your own data structures and algorithms from scratch STL gives you optimized tested versions.


## ***The 3 Core Pillars of STL***

STL is built of three main components:

1. ***Sequence Container (Ordered, linear)***

- vector -> dynamic array
- list -> doubly linked list
- deque -> double-ended queue


2. ***Associative Containers (sorted, fast lookup)***
- set -> unique elements
- map -> key-value pairs
- multiset, multimap -> allows duplicates


3. ***Unordered Containers (hash-based, faster lookup)***
- unordered_map
- unordered_set


## ***Algorithms***

STL provides read made functions to operate on data.

example:
- sort()
- reverse()
- find()
- count()
- binary_search()

## ***Iterators***

Iterators act like pointers to traverse containers.

**Types:**
- begin()
- end()
- rbegin()
- rend()


## ***Why STL is Powerful***

1. saves time
No need to implement data structures from scratch.

2. Generic Programming
Works with any data type using templates.

3. Optimized Performance
STL is written by experts -> very efficient.

4. Consistency
Same interface across containers.


## How Everything Connects

This is most important concept:

Algorithms don't work on containers directly, they work on iterators.

example:

```cpp
sort(v.begin(), v.end());
```


