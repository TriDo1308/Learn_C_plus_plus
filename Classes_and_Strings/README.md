# Classes and Strings assignment

## Overview
This assignment requires the creation of a simple C++ class to represent a URL, such as `http://www.example.com/index.html`. The class must include two `std::string` members:
- One to store the **protocol** (e.g., `http`).
- Another to store the **resource** (e.g., `www.example.com/index.html`, the part following the separator).

## Requirements
The assignment consists of the following tasks:
1. **Class Definition**: Define a C++ class named `URL` with two `std::string` members for the protocol and resource.
2. **Constructor**: Implement a constructor that accepts the protocol and resource as arguments.
3. **Display Function**: Add a member function to display the complete URL, formatted as the protocol, followed by the separator (`://`), and then the resource (e.g., `http://www.example.com/index.html`).
4. **Test Program**: Write a program to test the class by creating a `URL` object and calling its member function to print the complete URL.

## Expected Output
For a `URL` object initialized with protocol `http` and resource `www.example.com/index.html`, the output should be:
```cpp
http://www.example.com/index.html