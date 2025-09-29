# Undo/Redo String Class (C++)

## Overview
This project implements a custom string class `clsMyString` that supports **Undo** and **Redo** operations. It allows storing a string value and navigating through its history of changes, enabling users to revert or reapply modifications efficiently.

## Features
- Store a string value with history tracking.
- Undo the last change to revert to a previous state.
- Redo an undone change to restore a reverted state.
- Uses two stacks internally to manage undo and redo operations.
- Provides a property-like interface using `__declspec(property)` for convenient get/set access.

## Advantages
- Simple and efficient implementation using standard C++ STL stacks.
- Enables safe manipulation of string values with full undo/redo support.
- Easily reusable in projects that require versioning of text or string inputs.
- Demonstrates encapsulation and object-oriented design principles in C++.

