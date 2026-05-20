# 🔍 File Search Engine (C++)

## 🚀 Status: In Progress

A modern C++ search engine that indexes text files and performs fast ranked searches using inverted indexing.

---

# 📌 Overview

This project scans text files from a folder, tokenizes and normalizes content, builds an inverted index, and provides ranked search results.

The engine supports:
- single-word search
- multi-word OR search
- multi-word AND search
- frequency-based ranking

---

# ✨ Features

## 📂 Automatic Folder Scanning
- Uses C++17 filesystem library
- Automatically detects `.txt` files
- No hardcoded file paths required

---

## 🔤 Tokenization
- Splits text into words
- Handles spaces and punctuation
- Preserves meaningful symbols like:
  - `+`
  - `#`
  - `_`
  - `-`

---

## 🔄 Text Normalization
- Converts all text to lowercase
- Case-insensitive search support

---

## 🚫 Stop Word Filtering
Ignores common meaningless words like:

- the
- is
- a
- an
- of
- to
- and

Improves search quality and indexing efficiency.

---

## ⚡ Inverted Indexing

Core structure:

```text
word → file → frequency
```

Example:

```text
c++ →
    file1.txt → 5
    file2.txt → 2
```

---

## 📊 Ranked Search Results
- Results sorted using STL `sort()`
- Higher frequency files appear first

Example:

```text
data.txt (7 times)
notes.txt (4 times)
```

---

# 🔎 Search Types

## ✅ Single Word Search

Example:

```text
c++
```

---

## ✅ OR Search

Example:

```text
c++ programming
```

Returns files containing:
- `c++`
OR
- `programming`

Combined frequencies are merged and ranked.

---

## ✅ AND Search

Returns only files containing ALL searched words.

---

# 🧠 Technologies Used

- C++
- STL Containers
  - `unordered_map`
  - `vector`
  - `set`
  - `pair`
- STL Algorithms
  - `sort()`
- C++17 Filesystem Library

---

# 📁 Project Structure

```text
project/
│
├── include/
│   ├── Filescanner.h
│   ├── Tokenizer.h
│   └── Indexer.h
│
├── src/
│   ├── Filescanner.cpp
│   ├── Tokenizer.cpp
│   ├── Indexer.cpp
│   └── main.cpp
│
└── data/
    ├── file1.txt
    ├── file2.txt
    └── file3.txt
```

---

# ⚙️ Build Command

```bash
g++ -std=c++17 ./src/Filescanner.cpp ./src/Indexer.cpp ./src/main.cpp ./src/Tokenizer.cpp -Iinclude
```

---

# ▶️ Run

```bash
./a.exe
```

---

# 📊 Example Workflow

## Input Folder

```text
./data
```

---

## Search Query

```text
c++ programming
```

---

## Output

```text
Word found in:

file1.txt (7 times)
file3.txt (4 times)
file2.txt (1 times)
```

---

# 🎯 Concepts Learned

- File Handling
- Tokenization
- Inverted Indexing
- Query Processing
- Frequency Ranking
- STL Sorting
- Nested Hash Maps
- Filesystem Traversal
- Stop Word Filtering

---

# 🚧 Upcoming Improvements

- Phrase Search
- TF-IDF Ranking
- Recursive Folder Scanning
- Multithreaded Indexing
- Performance Benchmarking
- Search Suggestions

---

# 🏁 Current Progress

## ✅ Completed
- Filesystem integration
- Automatic txt scanning
- Dynamic indexing
- Frequency-based ranking
- OR search
- AND search
- Stop-word filtering
- Case normalization
- Query parsing

---

# 🎯 Goal

To build a scalable mini search engine using modern C++ and real-world information retrieval concepts.