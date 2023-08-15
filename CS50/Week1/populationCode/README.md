# Population Growth Calculator
### Lab 1
<p>
    <img src="https://img.shields.io/static/v1?label=CS50&message=Havard&color=red&style=for-the-badge&logo="/>
    <img src="http://img.shields.io/static/v1?label=STATUS&message=completed&color=success&style=for-the-badge&"/>
    <img src="http://img.shields.io/static/v1?label=IDEA&message=INTELLIJ&color=bi=success&style=for-the-badge&"/>
</p>


## Overview

This repository contains a simple C code implementation of a population growth calculator. The program calculates the
number of years required for a population to reach a specific size, based on an initial population and a desired final
population. The underlying model assumes that the population grows by a fraction of its current size annually.

## Instructions to Run the Program

Follow these steps to run the population growth calculator on your local machine:

### Step 1: Install a C Compiler

Ensure that you have a C compiler installed on your system. For Windows, you can use [MinGW](http://www.mingw.org/),
while for macOS and Linux, [GCC](https://gcc.gnu.org/) (GNU Compiler Collection) is recommended.

### Step 2: Create a New C File

Open a text editor (e.g., Notepad on Windows, nano on macOS/Linux) and copy the provided C code into a new file. Save
the file with a `.c` extension, such as `population_calculator.c`.

### Step 3: Compile the Code

Open a terminal or command prompt and navigate to the directory where you saved the C file.

For Windows with MinGW:

```bash
gcc -o population_calculator.exe population_calculator.c
```

For macOS/Linux with GCC:

```bash
gcc -o population_calculator population_calculator.c
```

This compiles the code and generates an executable file named `population_calculator.exe` (Windows)
or `population_calculator` (macOS/Linux).

### Step 4: Run the Program

After successful compilation, run the program by executing the generated executable:

For Windows:

```bash
population_calculator.exe
```

For macOS/Linux:

```bash
./population_calculator
```

## How to Use the Program

Upon running the program, you'll be prompted to provide the initial population. Enter an integer value greater than or
equal to 9, as the program's logic requires an initial population of at least 9.

Following the initial population input, provide the final population. Enter an integer value greater than or equal to
the initial population.

The program will then calculate the number of years needed for the population to reach the final population size, based
on the given growth model, and display the result. Subsequently, the program will terminate.

## Example Usage

Suppose you input the following values:

```
Write the start population: 100
Write the final population: 200
```

The program will output:

```
Years: 9
```

This indicates that it would take approximately 9 years for a population starting with 100 individuals to grow to a size
of 200 individuals, according to the provided growth model.

## Note

Feel free to experiment with different initial and final population values to observe how the required growth duration
changes. It's important to note that this program employs a simplified model and doesn't account for various real-world
factors that can influence population growth.
