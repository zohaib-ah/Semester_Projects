# Credit Card Validator

## Overview

This project is a terminal-based program that validates credit card numbers using the **Luhn Algorithm**. It also identifies the card issuer based on the input credit card number.

---

## Features

- **Validation**: Checks if the entered credit card number is valid.
- **Card Identification**: Identifies the card issuer (e.g., Visa, MasterCard, etc.).
- **Terminal-Based**: Fully functional as a terminal application.

---

## Luhn Algorithm

The validation process uses the following steps:

1. Sum integers at odd positions from the rightmost digit.
2. Multiply integers at even positions by 2 and sum the digits of the result.
3. Add the results of the above steps.
4. If the total sum is divisible by 10, the credit card number is valid.

---

"""

# Base Converter in High-Level Language



This project demonstrates a **Base Converter** implemented in C++ with **inline assembly**, showcasing the use of assembly instructions alongside high-level code. It supports conversions between Decimal, Binary, and Hexadecimal number systems.



## Features



- **Inline Assembly Integration**: Represents an excellent example of integrating assembly code into a high-level language.

- **Cross-Platform Compatibility**: The executable file can run on both Windows and Linux.

- **16-bit Data Handling**: Handles inputs of up to 16 bits efficiently.

- **Accurate Calculations**: Tested rigorously for precise results.

---

## Conversion Functions



1. **Decimal to Hexadecimal**

2. **Hexadecimal to Decimal**

3. **Decimal to Binary**

4. **Binary to Decimal**

5. **Hexadecimal to Binary**

6. **Binary to Hexadecimal**



Each function is implemented as a standalone unit.

---

## Strengths



- Accurate and reliable results.

- Cross-platform executable compatibility.

- A strong demonstration of inline assembly in a practical application.


---
## Shortcomings



- Code optimization is lacking, especially regarding reusability.

- Inability to process signed numbers.

- Functions lack parameterization, making them less modular.

- Limited support for additional conversions (e.g., Octal).

- Requires **Microsoft Visual C++** (MSVC) for compilation due to Intel assembly syntax.

---

## Testing



- All code lines were tested using a disassembler, register panel, and memory viewer in Visual Studio.

- Results were validated against an online base converter.

- Robust testing with edge cases:

  - Large inputs exceeding 16-bit limits.

  - Invalid or negative inputs.

- Functionality of switches between functions was verified.
---
## How to Use

### Prerequisites

- Install **Visual Studio** with MSVC compiler support.

### Compilation

```bash
# Open the project in Visual Studio

# Build and run the executable
