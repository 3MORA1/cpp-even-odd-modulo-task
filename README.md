# Modular Position After Steps (C++) 🔢⚙️

## 📌 Overview | نظرة عامة
**English:**  
A C++ problem-solving solution using `unsigned long long` and conditional branching (`if`/`else`) based on whether `m` is even or odd. If `m` is odd, it is incremented by `1` before adding `x` and taking the result modulo `n` (returning `n` when the remainder is `0`).

**العربية:**  
حل مسألة برمجية بلغة C++ باستخدام نوع البيانات `unsigned long long` والجمل الشرطية (`if`/`else`) بناءً على حالة `m` (زوجية أم فردية)[). إذا كانت `m` فردية يتم زيادتها بمقدار `1` قبل جمع `x` وحساب باقي القسمة على `n` (مع طباعة `n` عندما يكون باقي القسمة `0).

---

## ⚙️ Logic & Approach | فكرة الحل
1. Read three `unsigned long long` values: `n`, `m`, and `x`.
2. If `m` is even (`m % 2 == 0`), keep `m` as is; otherwise (`else`), increment `m` (`m++`).
3. Compute `(m + x) % n`:
   - If `(m + x) % n == 0`, output `n`.
   - Otherwise, output `(m + x) % n`.

---

## 💻 Sample Input & Output | أمثلة على المدخلات والمخرجات

### Example 1
**Input:**
```text
6 4 5
3

Example 2
Input:
5 4 3
Output:
2
