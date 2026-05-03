
📂 File Search Engine (C++)

🚀 Project Status: In Progress (Day 5)
This project is a basic file search engine built in C++ that indexes text files and allows fast searching of words across multiple files.

🎯 What This Project Does
Reads multiple text files
Breaks content into words (tokenization)
Builds an index for fast lookup
Allows user to search for words
Shows which files contain the word
Also shows how many times the word appears in each file

🧠 Core Concept
Instead of scanning files every time, the program builds an index:
Plain text
word → file → count
Example:
Plain text
c++ → file1.txt (3), file2.txt (1)
This makes searching fast and efficient.

⚙️ Features Implemented
✅ File Handling
Reads multiple files
Supports custom file paths
✅ Tokenization
Splits text into words
Handles spaces and formatting
✅ Normalization
Case-insensitive search (C++ == c++)
Removes unwanted punctuation
Preserves meaningful symbols like +
✅ Indexing
Uses unordered_map for fast lookup
Stores frequency of words per file
✅ Search
User can input a word
Instantly returns matching files
Displays count of occurrences
✅ Clean Output
Displays only file names (not full paths)
Structured and readable results

🏗️ Project Structure
Plain text
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

🔧 Technologies Used
C++
STL:
unordered_map
map
vector
string

⚡ How It Works
Files are read
Text is tokenized into words
Words are normalized (case + punctuation)
Index is built:
Plain text
word → file → count
User searches for a word
Results are displayed instantly

📌 Example Output
Plain text
Enter word: c++

Word found in:
- file1.txt (3 times)
- file2.txt (1 time)

🚧 Upcoming Features
🔹 Sorting results by frequency
🔹 Multi-word search (AND / OR)
🔹 Stop word removal
🔹 Multithreading for faster indexing
🔹 Folder-based file scanning

📈 Learning Outcomes
Data Structures (map, unordered_map, set, vector)
File handling in C++
Text processing
Algorithm optimization
Project structuring and modular design

🏁 Current Progress
Plain text
Day 1–3 → Core engine (reading + indexing)
Day 4   → Normalization + clean search
Day 5   → Frequency-based indexing (current)

🤝 Future Goal
Transform this into a mini search engine with:
ranking
performance optimization
scalable design
