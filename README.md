Credit Card Validator
Overview

The Credit Card Validator is a terminal-based program designed to validate credit card numbers using the Luhn algorithm. This project was developed as part of a semester project for the Programming Fundamentals course.
Key Features

    Validates credit card numbers based on the Luhn algorithm.
    Identifies the credit card's issuer (e.g., Visa, MasterCard, American Express, etc.).
    Provides a user-friendly terminal interface for validation.

Algorithm Used: Luhn Algorithm

The Luhn algorithm, also known as the Modulus 10 algorithm, is a checksum formula widely used to validate identification numbers. It performs the following steps:

    Calculates the sum of integers at odd positions (starting from the rightmost digit).
    Multiplies numbers at even positions by 2 and adjusts sums greater than 9.
    Combines these results to determine if the number is valid (sum % 10 == 0).

Scope

    The program does not generate valid credit card numbers but checks the validity of input numbers.
    It ensures that the number follows the mathematical rules of the Luhn algorithm but does not verify expiration dates, CVV codes, or other security features.

Sample Output

The program provides clear feedback on:

    Whether the card number is valid.
    The card issuer (if valid).

Future Work

Planned improvements include:

    Adding features to provide more details about the credit card, such as card type or bank information.
