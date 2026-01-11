# Sensor Parity Security System

This project is a C-based simulation of a **Security Sensor Processor**. It reads raw integer data from a sensor array, encodes it into a binary sequence based on parity (Odd/Even), and decodes it into a decimal **Security Code**.

## ⚙️ Algorithm Logic

The system processes the data in 3 stages:

1.  **Data Acquisition:**
    * Input Array: `[6, 14, 43, 53, 64, 32, 24]`
2.  **Parity Transformation (Encoding):**
    * Iterates through the array.
    * **Even Numbers:** Converted to `0`
    * **Odd Numbers:** Converted to `1`
    * *Result:* `0011000` (Binary Sequence)
3.  **Decoding (Security Code Calculation):**
    * The binary sequence is converted to a decimal integer.
    * Calculation: $0 \cdot 2^6 + 0 \cdot 2^5 + 1 \cdot 2^4 + 1 \cdot 2^3 + 0 \cdot 2^2 + 0 \cdot 2^1 + 0 \cdot 2^0$
    * **Result:** `24`

## 🚀 Build & Run

To compile and run the project (requires math library):

```bash
gcc main.c -o security_system -lm
./security_system
