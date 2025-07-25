# Event-Castering-System
A console-based event catering system written in C++ using custom linked lists. Handles multi-event orders, celebration types, dish selection, revenue reports, and search logic — all structured like a real-world backend engine.

## 🚀 Features

- ✅ Double-linked list: parent (event) node with child (order) linked list
- ✅ Celebration type support: Hari Raya, CNY, Birthday, Annual Dinner, Wedding
- ✅ Menu logic by celebration — includes pricing, validation & custom selections
- ✅ Pax tracking, revenue calculation, server requirements per style (Buffet/Course)
- ✅ Preset dummy data for testing flow and structure
- ✅ Search engine with custom hybrid search logic (segment-based)
- ✅ Monthly summary reports: revenue + celebration breakdown
- ✅ Dynamic memory allocation (`new`) with deep copy of nodes
- ✅ Console coloring and system pause for better user flow (Windows-based)

---

## 🛠️ Tech Stack

- **Language:** C++  
- **Data Structure:** Custom-built linked lists  
- **Environment:** Windows console (`system("cls")`, ANSI color codes)
