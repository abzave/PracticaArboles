# Binary Search Tree Client Database in C++

This project is a client database implemented on a binary search tree, and develop in C++. The goal of this project is understand data structures and operations (insertion, search and transversal) on binary search trees.

## Table of Contents
1. [Project Overview](#project-overview)
2. [Features](#features)
3. [Requirements](#requirements)
4. [How to Compile and Run](#how-to-compile-and-run)
5. [Usage](#usage)

## Project Overview

This client database allows for efficient searches by ID, and display of the list of clients.

## Features

- **Client Storage**: Clients are stored in a binary search tree.
- **Client Search**: Allows to search clients by ID.
- **List Clients by ID**: Displays a list of all the clients ordered by ID.

## Requirements

- **C++ Compiler**: A C++ compiler supporting the C++11 standard or higher (e.g., MSVC or MinGW).
- **Binary Search Tree Database**: The client database is a binary search tree.

## How to Compile and Run

### Step 1: Clone the repository

``` bash
git clone https://github.com/abzave/PracticaArboles.git
cd PracticaArboles
```

### Step 2: Compile the project

If you are using **Visual Studio**, you can open a new `.sln` file in Visual Studio and build the project.
Alternatively, for **MinGW**, you can compile the source file using:

``` bash
g++*.cpp *.h -Wall
```

### Step 3: Run the program

Once compiled, run the executable.

## Usage

1. Select `1` to insert a new client.
    1. Enter the client ID.
    2. Enter the client name.
    3. Enter the client salary.
    4. Enter the client province.
    5. Enter the client marital status.
    6. A confirmation message will be displayed.
2. Select `2` to search a client.
    1. Enter the client ID.
    2. If the client is found, the client information will be displayed, otherwise "no results".
3. Select `3` to list the clients by ID.
    1. All the clients will be displayed sorted by ID.
4. Select `4` to exit.
