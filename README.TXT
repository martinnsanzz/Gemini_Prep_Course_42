# C_Pre-Cadet: 3-Week Intensive Prep (42/Codam Style)

This repository contains a structured, 21-day technical curriculum designed to bridge the gap between the **Piscine** and the **Core Curriculum** at 42/Codam. It focuses on memory depth, pointers to pointers, and modular software architecture.

---

## 🛠️ Curriculum Overview

The plan is divided into three high-intensity weeks (3–5 hours/day).

### Week 1: Deep Memory & Libc Logic

* **Stack vs Heap:** Internalizing the memory layout.
* **Double Pointers:** `int **` as function arguments and real memory modification.
* **Dynamic Management:** Intensive use of `malloc` and `free`.
* **Libc Reimplementation:** `strdup`, `atoi`, `calloc` with error handling.

### Week 2: Data Structures & Version Control

* **Linked Lists:** Manual implementation (Nodes, Insertion, Deletion, Full Free).
* **Structs & Headers:** Professional organization and code modularization.
* **Git Advanced:** Branching, merge/rebase, and conflict resolution workflows.

### Week 3: Algorithms & Build Systems

* **Big O Notation:** Analysis of basic complexity.
* **Sorting/Searching:** Linear vs Binary search; Bubble and Insertion sort.
* **Makefiles:** Rules, dependencies, variables, and flags (`-Wall -Wextra -Werror`).
* **Final Project:** A modular C application integrating dynamic arrays and structs.

---

## 📁 Repository Structure

```text
.
├── Week_01/
│   ├── Day_01/
│   ├── ...
│   └── Day_07/
├── Week_02/
├── Week_03/
└── Makefile (Final Project)

```

---

## ⚠️ Evaluation Rules (42 Standard)

All exercises must comply with the following constraints:

1. **Compilation:** Must compile with `-Wall -Wextra -Werror`.
2. **Memory:** Zero memory leaks. Use of `valgrind` is mandatory for verification.
3. **Functions:** Only allowed functions per exercise (no `printf` unless specified).
4. **Norm:** Consistent formatting and modularity.

---

## 🚀 How to use this repo

1. **Select a Day:** Navigate to the corresponding folder.
2. **Read the Exercise:** Follow the `Exercise XX` format in the `README.md` of each directory.
3. **Code:** Implement the solution in the required files.
4. **Test:** Use the provided constraints to verify your logic before moving to the next day.

---