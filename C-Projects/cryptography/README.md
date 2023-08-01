# Encryption Program
#### Caesar Cipher
<p>
    <img src="https://img.shields.io/static/v1?label=&message=cryptography&color=blue&style=for-the-badge&logo=C"/>
    <img src="http://img.shields.io/static/v1?label=STATUS&message=completed&color=success&style=for-the-badge&"/>
    <img src="http://img.shields.io/static/v1?label=IDEA&message=INTELLIJ&color=bi=success&style=for-the-badge&"/>
</p>

## Index

* [Encryption Program](#Encryption-Program)
* [Index](#Index)
* [Overview](#Overview)
* [Security](#Security-Note)
* [Prerequisites](#Prerequisites)
* [Instructions to Run the Program](#Instructions-to-Run-the-Program)
* [How to Use the Program](#How-to-Use-the-Program)
* [Example Usage](#Example-Usage)

## Overview
<p style="text-align: justify">
  This C code provides a simple encryption and decryption program based on the Caesar cipher. The Caesar cipher is a substitution cipher where each letter in the plaintext is shifted a certain number of places down or up the alphabet. In this program, the shift value is 2, meaning each character will be shifted two positions. The program allows the user to choose whether to encrypt or decrypt a password and then performs the respective operation.
</p>

## Security Note
<p style="text-align: justify">
 Please be aware that the Caesar cipher used in this program is not secure for actual password protection. It is a simple example for educational purposes only. For real-world encryption, use strong cryptographic algorithms and libraries.
</p>


## Prerequisites

<p style="text-align: justify">
Ensure you have a C compiler installed on your system. If you're using Windows, you can install the MinGW compiler <a href="http://www.mingw.org/" target="_blank" >(http://www.mingw.org/)</a>. For macOS, you can use Xcode, which includes the Clang compiler. On Linux, GCC (GNU Compiler Collection) should be available by default.
</p>

## Instructions to Run the Program

<p style="text-align: justify">
Step 1: Create a New C File
Open a text editor (e.g., Notepad on Windows, nano on macOS/Linux) and copy-paste the provided C code into a new file. Save the file with a .c extension (e.g., cryptography.c).

Step 2: Compile the Code
Open a terminal or command prompt and navigate to the directory where you saved the C file.
</p>
For Windows with MinGW:

````
gcc -o encryption_program.exe cryptography.c
````
For macOS/Linux with GCC:
````
gcc -o encryption_program cryptography.c
````
<p style="text-align: justify">
This will compile the C code and generate an executable file named cryptography.exe (Windows) or cryptography (macOS/Linux).
</p>
<p style="text-align: justify">
Step 3: Run the Program
After successful compilation, run the program by executing the generated executable:
</p>
For Windows with MinGW:

````
cryptography.exe
````
For macOS/Linux:

````
./cryptography
````

## How to Use the Program
Upon running the program, you will see the following prompt:
````
Choose an option:
1. Encrypt
2. Decrypt
Enter your choice:
````
<p style="text-align: justify">
1. Enter the number corresponding to your desired action (1 for encryption or 2 for decryption) and press Enter.
<br>2. You will be asked to write your password. Enter the password you want to encrypt or decrypt and press Enter.
<br>3. The program will process your password based on the chosen action and display the result.
<br>4. You will be prompted to choose again (up to two times). After two iterations, the program will exit.
</p>

## Example Usage
Suppose the user enters the following input:
````
Choose an option:
1. Encrypt
2. Decrypt
Enter your choice: 1
Write your password: hello
````
The output will be:
````
Encrypted Password: jgnnq
````
<p style="text-align: justify">
This is the result of shifting each letter of "hello" two positions to the right in the alphabet using the Caesar cipher.
</p>