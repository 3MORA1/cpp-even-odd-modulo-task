# Modular Position After Steps (C++) 🔢⚙️

## 📌 Overview | نظرة عامة
**English:**  
A C++ problem-solving solution using `unsigned long long` and conditional branching (`if`/`else`) based on whether `m` is even or odd[span_3](start_span)[span_3](end_span). If `m` is odd, it is incremented by `1` before adding `x` and taking the result modulo `n` (returning `n` when the remainder is `0`)[span_4](start_span)[span_4](end_span).

**العربية:**  
حل مسألة برمجية بلغة C++ باستخدام نوع البيانات `unsigned long long` والجمل الشرطية (`if`/`else`) بناءً على حالة `m` (زوجية أم فردية)[span_5](start_span)[span_5](end_span). إذا كانت `m` فردية يتم زيادتها بمقدار `1` قبل جمع `x` وحساب باقي القسمة على `n` (مع طباعة `n` عندما يكون باقي القسمة `0`)[span_6](start_span)[span_6](end_span).

---

## ⚙️ Logic & Approach | فكرة الحل
1. Read three `unsigned long long` values: `n`, `m`, and `x`[span_7](start_span)[span_7](end_span).
2. If `m` is even (`m % 2 == 0`), keep `m` as is; otherwise (`else`), increment `m` (`m++`)[span_8](start_span)[span_8](end_span).
3. Compute `(m + x) % n`[span_9](start_span)[span_9](end_span):
   - If `(m + x) % n == 0`, output `n`[span_10](start_span)[span_10](end_span).
   - Otherwise, output `(m + x) % n`[span_11](start_span)[span_11](end_span).

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
