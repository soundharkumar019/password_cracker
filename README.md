# 🔐 Simulated Password Brute-Force Cracker (C++)

This is a basic C++ program that simulates a password brute-force attack using a wordlist. It's designed for educational and ethical hacking training purposes.

## 🚀 How It Works

- It reads a list of potential passwords from `wordlist.txt`.
- Tries each one to match a predefined target password (e.g., `"hunter2"`).
- Prints the correct password and number of attempts.

## 📦 Files

- `password_cracker.cpp` - Main C++ source file.
- `wordlist.txt` - Sample list of common passwords.
- `README.md` - Project documentation.

## 🛠 Build Instructions

### Compile

```bash
g++ password_cracker.cpp -o cracker
