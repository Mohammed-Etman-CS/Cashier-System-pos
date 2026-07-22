#  POS Cashier System (C++)

A C++ console application that simulates a Point of Sale (POS) supermarket checkout system. The program handles item pricing, applies conditional discounts, computes sales taxes, and manages customer payment verification.

---

##  Features

- **Automated Subtotal Calculation:** Calculates total costs for 3 input items.
- **Dynamic Discount System:** Automatically applies a **10% discount** when the subtotal exceeds **500 EGP**.
- **Sales Tax Computation:** Applies a **14% VAT** after discount application.
- **Formatted Receipt:** Displays a structured, human-readable receipt in the console.
- **Payment Validation & Change Calculation:** Verifies customer funds and returns exact change or calculates missing balance.

---

##  Technical Implementation

- **Language:** C++
- **Concepts Applied:** 
  - Control Flow (`if / else` logic)
  - Mathematical & Logical Operators
  - Standard I/O (`cin`, `cout`)
  - Output Formatting (`<iomanip>`, `fixed`, `setprecision`)

---

##  Example Usage

=================================
    EX Supermarket Cashier       
=================================
Enter price of Item 1: 200
Enter price of Item 2: 250
Enter price of Item 3: 150

---------------------------------
             RECEIPT             
---------------------------------
Subtotal:                600.00 EGP
Discount Applied (10%): -60.00 EGP
Subtotal after Discount: 540.00 EGP
Taxes (14% VAT):        +75.60 EGP
---------------------------------
FINAL TOTAL:             615.60 EGP
---------------------------------

Enter Customer Payment: 700

[SUCCESS] Payment Successful!
Change to Return: 84.40 EGP
Thank you for shopping with us!

---

##  How to Run (Windows / GCC)

1. Clone the repository:
   git clone https://github.com/Mohammed-Etman-CS/Cashier-System-pos.git

2. Navigate to the project directory:
   cd Cashier-System-pos

3. Compile the code:
   g++ main.cpp -o main

4. Run the application:
   .\main.exe
