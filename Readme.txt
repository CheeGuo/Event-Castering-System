# 🍽️ Event Catering Management System (C++ Project)

A fully console-based event management system written in C++ — built to handle **food catering operations** for multiple celebration types. This system manages event bookings, dish selections, order summaries, and revenue tracking using **custom linked list data structures**.

Designed to simulate **real-world backend logic** and test advanced C++ structuring, data handling, and memory management skills.

---

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

---

## 🧠 How It Works

1. Choose to create a new event  
2. Enter user info (name, phone, date, pax, etc.)  
3. Select celebration type & menu items  
4. System validates selections, calculates pricing & server count  
5. Save, edit, or cancel orders  
6. View events sorted by revenue or by event type  
7. Search by Order ID  
8. Generate monthly summaries

---

## 📸 Screenshots

*(Optional: Add your screenshots here in a folder called `/screenshots`)*

---

## 🧑‍💻 Author

**Chee Guo** – [UNIMAS Computer Science Student]  
Former Chess Athlete, Backend Dev Enthusiast, Problem Solver  
> You can find me on LinkedIn: [linkedin.com/in/chee-guo-68a225194](https://linkedin.com/in/chee-guo-68a225194)

---

## ⚠️ Notes

- This is a university-level project focused on mastering logic & C++ linked list operations  
- `goto` is used for simplicity — in future versions, control flow should be refactored using loops and functions  
- This project is designed for console use on Windows

---

## 📁 How to Run

```bash
g++ main.cpp -o event_catering.exe
./event_catering.exe
