# 🔷 Graph Bipartiteness Checker

A command-line program that determines whether an **undirected graph is bipartite**.  
The program reads a graph from a text file, analyzes its structure using a **Depth-First Search (DFS)** algorithm, and outputs the result to a file.

---

# 📖 Table of Contents

- [Project Description](#project-description)
- [Input Format](#input-format)
- [Program Usage](#program-usage)
- [Algorithm](#algorithm)
- [Data Structures](#data-structures)
- [Program Structure](#program-structure)
- [Example](#example)

---

# 📌 Project Description

The goal of the project is to create a program that checks whether a given **undirected graph is bipartite**. A graph is bipartite if its vertices can be divided into **two disjoint sets** such that **no edge connects vertices within the same set**. If the graph is bipartite, the program outputs the vertices belonging to each group.

---
# 📂 Input Format

The graph is provided in a text file with the following rules:

- Each **edge is written in a separate line**
- Each line contains **two vertices connected by an edge**
- The file may contain **empty lines**
- Lines may contain **extra whitespace characters**

---

### Example input file

0  1
2 0
1 3
3 0

# ▶ Program Usage

---

The program is executed from the **command line** using two parameters:

| Parameter | Description |
|-----------|-------------|
| `-i` | Input file containing graph edges |
| `-o` | Output file containing program results |

If incorrect parameters are provided, the program prints a **help message explaining how to run it correctly**.

---

# ⚙ Algorithm

The program checks graph bipartiteness using **Depth-First Search (DFS)**.

Steps:

1. Read graph from the input file.
2. Represent the graph as an **adjacency list**.
3. Traverse the graph using DFS.
4. Assign vertices to one of **two colors (groups)**.
5. If two adjacent vertices receive the same color → the graph is **not bipartite**.

Time complexity: O(V + E)


Where:

- `V` – number of vertices  
- `E` – number of edges

---

# 🧱 Data Structures

The program uses a custom `Graph` class which contains:

- **Adjacency list** representation of the graph
- Methods for:
  - reading the graph from a file
  - checking bipartiteness
  - printing the graph
  - grouping vertices

The adjacency list is implemented using a **vector of lists**.

Additional structures used:

- `visited` vector – tracks visited vertices
- `color` vector – stores group assignment of vertices

---

# 🏗 Program Structure

Main components of the program:

### `main()`

Responsible for:

- validating command line parameters
- opening input and output files
- creating the `Graph` object
- executing graph analysis
- displaying and saving results

### `read_graph()`

Reads edges from the input file and builds the adjacency list.

### `print_graph()`

Displays the graph structure.

### `is_bipartite()`

Checks if the graph is bipartite.

### `DFS_is_bipartite()`

Recursive DFS method that:

- traverses graph vertices
- assigns them to groups
- detects conflicts

### `group_vertices()`

If the graph is bipartite, this function divides vertices into two groups.

### `show_results()`

Displays results in the console.

### `save_results()`

Writes results to the output file.

---

# 👨‍💻 Author

Project created as part of a programming assignment focused on **graph algorithms and data structures**.

