# 🔍 File Search Engine (C++)

## 🚀 Status: In Progress (Day 6)

A C++ project that builds a fast and efficient search engine for text files using indexing and ranking techniques.

---

## 📌 Overview

This project reads multiple text files, processes their content, and builds an index for fast searching.

Instead of scanning files repeatedly, the program creates an optimized structure:

```plaintext
word → file → frequency
```

The search results are ranked based on word frequency.

---

## ✨ Features

### 📂 File Processing
- Reads multiple text files
- Supports custom file paths

### 🔤 Tokenization
- Splits file content into words
- Handles text normalization

### 🔄 Normalization
- Case-insensitive search
- Removes unwanted punctuation
- Preserves meaningful symbols like `+`

### ⚡ Fast Indexing
- Uses `unordered_map` for efficient lookup
- Frequency-based indexing

### 📊 Ranked Search Results
- Displays files containing searched word
- Sorts results by highest frequency

### 📄 Clean Output
- Displays readable file names
- Structured search results

---

## 🧠 Core Data Structure

```plaintext
word → file → count
```

Example:

```plaintext
c++ →
    file1.txt → 5
    file2.txt → 2
    file3.txt → 1
```

---

## 📁 Project Structure

```plaintext
project/
│
├── main.cpp
├── FileScanner.h / .cpp
├── Tokenizer.h / .cpp
├── Indexer.h / .cpp
│
└── sample_files/
    ├── file1.txt
    ├── file2.txt
    └── file3.txt
```

---

## ⚙️ Technologies Used

- C++
- STL Containers & Algorithms:
  - `unordered_map`
  - `vector`
  - `pair`
  - `sort()`

---

## 📊 Example Output

```plaintext
Enter word: c++

Word found in:
- file1.txt (5 times)
- file3.txt (2 times)
- file2.txt (1 time)
```

---

## 📈 Current Progress

### ✅ Completed
- File reading
- Tokenization
- Case normalization
- Punctuation handling
- Frequency-based indexing
- Ranked search results
- STL sorting with custom comparison

---

## 🚧 Upcoming Features

- 🔹 Multi-word search (AND / OR)
- 🔹 Stop-word filtering
- 🔹 Folder-based file scanning
- 🔹 Multithreaded indexing
- 🔹 Performance benchmarking

---

## 🎯 Learning Outcomes

- File handling in C++
- STL containers and algorithms
- Nested data structures
- Sorting using custom comparators
- Modular software design
- Search indexing concepts

---

## 🏁 Goal

To build a scalable mini search engine with:
- fast indexing
- ranked retrieval
- optimized performance
- multithreaded processing