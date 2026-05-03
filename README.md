
🔍 File Search Engine (C++)

🚀 Status: In Progress (Day 5)

A C++ project that builds a fast search engine over text files using indexing techniques.

---

📌 Overview

This project reads multiple text files, processes their content, and builds an index to allow instant word search across files.

Instead of scanning files repeatedly, it uses an efficient data structure:

word → file → count

---

✨ Features

- 📂 Read multiple text files
- 🔤 Tokenize file content into words
- 🔄 Case-insensitive search
- 🧹 Punctuation handling (keeps meaningful symbols like "+")
- ⚡ Fast search using "unordered_map"
- 🔢 Frequency counting of words per file
- 📄 Clean and readable output

---

🧠 How It Works

1. Files are loaded

2. Content is split into words

3. Words are normalized (case + punctuation)

4. Index is built:
   
   word → file → count

5. User searches a word

6. Results are returned instantly

---

📁 Project Structure

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

---

⚙️ Technologies Used

- C++
- STL:
  - "unordered_map"
  - "map"
  - "vector"
  - "string"

---

📊 Example

Enter word: c++

Word found in:
- file1.txt (3 times)
- file2.txt (1 time)

---

📈 Current Progress

- ✅ File reading
- ✅ Tokenization
- ✅ Normalization (case + punctuation)
- ✅ Indexing (word → file → count)
- ✅ Search functionality

---

🚧 Upcoming Improvements

- 🔹 Sort results by frequency
- 🔹 Multi-word search (AND / OR)
- 🔹 Stop word filtering
- 🔹 Multithreading for faster indexing
- 🔹 Automatic folder scanning

---

🎯 Learning Outcomes

- Data Structures (maps, vectors)
- File handling in C++
- Text processing
- Algorithm optimization
- Modular code design

---

🏁 Goal

To build a mini search engine with efficient indexing, ranking, and scalable design.