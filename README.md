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


