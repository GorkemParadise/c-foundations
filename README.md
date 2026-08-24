# C Foundations

> An open notebook for learning C from scratch — lecture notes, code, labs, and exam solutions from CSE 114 at Yeditepe University, kept public for the students who come after.

## Overview

This repository documents everything I have written, studied, and experimented with while learning C from scratch during my studies at **Yeditepe University**. It is maintained continuously throughout the semester and is designed to serve two purposes:

1. **A personal learning log** — a chronological record of my progress, notes, and solved exercises, organized so I can easily revisit any topic.
2. **A reference for future students** — particularly those enrolled in **CSE 114 (Programming with C)** at Yeditepe University, who can use the lecture notes, lab solutions, and past-exam write-ups as supporting study material.

The repository is actively updated and will keep growing as I progress through more advanced systems and programming courses.

---

## Learning Path

This repository is the first step in a broader undergraduate learning path focused on low-level and systems programming. Future installments will cover related courses as I take them.

| Course                          | Institution         | Status                    | Repository                                                         |
| ------------------------------- | ------------------- | ------------------------- | ------------------------------------------------------------------ |
| CSE 114 — Programming with C    | Yeditepe University | In progress (Spring 2026) | this repository                                                    |
| CSE 211 — Data Structures (C++) | Yeditepe University | Upcoming                  | [cpp-foundations](https://github.com/gorkemergune/cpp-foundations) |

---

## Repository Structure

The repository is organized by topic and chronology. A typical directory layout:

```
c-foundations/
├── document/           # General information from W3School
├── extra/              # Questions containing thought-provoking
├── homework/           # Every semester the professor gives it
├── lecture/            # Notes from the course in Spring 2026.
├── new-lab/            # 2026 Spring semester lab solutions
├── old-lab/            # 2026 Fall semester lab solutions
└── README.md
```

---

## Building and Running

Most examples are standalone `.c` files that can be compiled with any standard C compiler.

### Using GCC or Clang

```bash
gcc file_name.c -o program
./program
```

### On Windows

[MinGW-w64](https://www.mingw-w64.org/) and MSYS2 both work with the command above. The repository also works out of the box with Visual Studio Code and the official C/C++ extension.

### Recommended Flags While Learning

- `-Wall -Wextra` — enable most warnings
- `-std=c11` — use a modern standard (`-std=c99` if your course requires it)
- `-g` — include debug symbols for use with `gdb`
- `-fsanitize=address,undefined` — catch memory errors and undefined behavior early (GCC/Clang)

---

## Course Information

**Yeditepe University — CSE 114: Programming with C**
Academic term: _Spring 2026_

CSE 114 is a foundational course that introduces the C programming language alongside core computer-science concepts such as algorithmic thinking, problem decomposition, and debugging. This repository tracks the course in near real time and includes:

- Lecture notes rewritten in my own words
- Runnable code examples for every major topic
- Solved lab exercises, organized by week

---

## Labs

Lab solutions are split by semester to preserve historical context for both the current and prior terms.

### Current Semester — Spring 2026

Active lab solutions for the ongoing CSE 114 term. Each lab includes a short summary of the problem, my solution, and brief notes on the parts I found tricky.

### Previous Semester — Fall 2026

Archived lab solutions from an earlier offering of the course, kept as a reference point and for students who want to compare approaches across terms.

---

## Personal Projects

Small projects I built in C to apply and extend the concepts learned in the course:

| Project                                                                      | Description                                                                                                                                                                                                                                                                                                                                              |
| ---------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [gorkem-os](https://github.com/gorkemergune/gorkem-os)                       | An educational x86 operating system written from scratch in C and Assembly. Covers a custom bootloader, interrupt handling, physical/virtual memory management, process scheduling, a basic file system, and an interactive shell. Built and tested with NASM,`i686-elf-gcc`, Make, and QEMU. My deepest dive into low-level systems programming so far. |
| [sorting-visualizer](https://github.com/gorkemergune/sorting-visualizer)     | A visual demonstration of classic sorting algorithms (bubble, insertion, selection, quick, merge). Helpful for internalizing the mechanics behind each algorithm.                                                                                                                                                                                        |
| [raylib-space-shooter](https://github.com/gorkemergune/raylib-space-shooter) | A small 2D space-shooter game built with the[raylib](https://www.raylib.com) graphics library. A practical exercise in structuring a small C codebase, managing game state, and handling real-time input.                                                                                                                                                |

---

## Resources

A curated list of the materials I have personally found most useful. These are meant to complement — not replace — the official course material.

### Documentation and Tutorials

- [W3Schools — C Tutorial](https://www.w3schools.com/c/index.php) — a solid first pass on syntax
- [Learn-C.org](https://www.learn-c.org) — interactive, in-browser exercises
- [Beej&#39;s Guide to C Programming](https://beej.us/guide/bgc/pdf/bgc_usl_c_1.pdf) — a thorough and very readable free book

### Video Courses

- [C Programming Full Course for Beginners — Bro Code](https://www.youtube.com/watch?v=xND0t1pr3KY) — a comprehensive single-video course for newcomers
- [C Programming Projects (Intermediate)](https://www.youtube.com/playlist?list=PLiLzqLEAMKr7_oTKOosIP1QH4GTlZe29G) — project-based playlist once the basics are in place

### Practice Platforms

- [HackerRank — C Domain](https://www.hackerrank.com/domains/c) — challenges organized by difficulty
- [W3Resource — C Exercises](https://www.w3resource.com/c-programming-exercises/) — a wide range of small practice problems with solutions

---

## Academic Integrity and Disclaimer

All code, notes, and explanations in this repository are written by me. The style, structure, and syntactical choices reflect my own understanding at the time of writing and should be read as a learning log rather than as a canonical reference. Many of the solutions can almost certainly be written more concisely, more elegantly, or more efficiently — they represent my best attempt at the time, not the final word on any problem.

The material is shared strictly for educational reference. It is not intended to be copied directly into submitted coursework; students are expected to solve their assignments themselves and to use this repository only as a study aid.

---

_This repository is a living document. It is updated continuously throughout the semester as new topics, labs, and exams are covered._
