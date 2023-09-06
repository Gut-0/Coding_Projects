# Bulbs

#### Binary text

  <img src="https://img.shields.io/static/v1?label=010101&message=binary&color=darkgreen&style=for-the-badge"/>

## Index
- [x] [Overview](#overview)
- [x] [Instructions to Run the Program](#instructions-to-run-the-program)
- [x] [How to Use the Program](#how-to-use-the-program)
- [x] [Example Usage](#example-usage)
- [x] [Note](#note)

## Overview

This is a simple C code implementation for converting a text message into its binary representation using emojis. Each character in the input message is represented as an 8-bit binary string composed of emojis, where "⚫" represents '0' and "🟡" represents '1'.

| ⚫ | 🟡 |
|:-:|:-:|
| 0 | 1 |

---

## Instructions to Run the Program

Follow these steps to run the binary emoji converter on your local machine:

### Step 1: Install a C Compiler

Ensure that you have a C compiler installed on your system. For Windows, you can use [MinGW](http://www.mingw.org/), while for macOS and Linux, [GCC](https://gcc.gnu.org/) (GNU Compiler Collection) is recommended.

### Step 2: Create a New C File

Open a text editor (e.g., Notepad on Windows, nano on macOS/Linux) and copy the provided C code into a new file. Save the file with a `.c` extension, such as `binary_emoji_converter.c`.

### Step 3: Compile the Code

Open a terminal or command prompt and navigate to the directory where you saved the C file.

For Windows with MinGW:

```shell
gcc -o binary_emoji_converter.exe binary_emoji_converter.c
```

For macOS/Linux with GCC:

````bash
gcc -o binary_emoji_converter binary_emoji_converter.c
````

This compiles the code and generates an executable file named binary_emoji_converter.exe (Windows) or binary_emoji_converter (macOS/Linux).


### Step 4: Run the Program

After successful compilation, run the program by executing the generated executable:

For Windows:
```shell
binary_emoji_converter.exe
```
For macOS/Linux:
```bash
./binary_emoji_converter
```

---

## How to Use the Program
Upon running the program, you'll be prompted to enter a message. Input the text message you want to convert to binary emojis and press Enter.

The program will then display the binary representation of the input message using emojis. Each character in the message will be represented as an 8-bit binary string composed of emojis.

---

### Example Usage
Suppose you input the following message:

```
Message: Hello!
```

The program will output:
```
⚫️🟡⚫️⚫️🟡⚫️⚫️⚫️
⚫️🟡🟡⚫️⚫️🟡⚫️🟡
⚫️🟡🟡⚫️🟡🟡⚫️⚫️
⚫️🟡🟡⚫️🟡🟡⚫️⚫️
⚫️🟡🟡⚫️🟡🟡🟡🟡
⚫️⚫️🟡⚫️⚫️⚫️⚫️🟡
⚫️⚫️⚫️⚫️🟡⚫️🟡⚫️
```
This output represents the binary emoji representation of the input message "Hello!".

---

## Note
> Feel free to experiment with different text messages to observe their binary emoji representations. This program provides a playful way to visualize binary data but does not perform any meaningful binary operations.