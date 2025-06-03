
## ✅ 1. **int (32-bit signed)**

* **Range:** `−2,147,483,648` to `2,147,483,647`
* **Constants:** `INT_MIN = -2^31`, `INT_MAX = 2^31 - 1`

### 🔐 Constraint Check:

```cpp
if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) return 0;
if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) return 0;
```

---

## ✅ 2. **unsigned int (32-bit unsigned)**

* **Range:** `0` to `4,294,967,295`
* **Max:** `UINT_MAX = 2^32 - 1`

### 🔐 Constraint Check:

```cpp
if (rev > UINT_MAX / 10 || (rev == UINT_MAX / 10 && digit > 5)) return 0;
```

*(digit check is 5 instead of 7/8 because max is even)*

---

## ✅ 3. **long (typically 32-bit or 64-bit depending on system)**

### Most compilers (like GCC) use:

* **32-bit system:** Same as `int`
* **64-bit system:** Same as `long long`

---

## ✅ 4. **long long (64-bit signed)**

* **Range:** `−9,223,372,036,854,775,808` to `9,223,372,036,854,775,807`
* **Constants:** `LLONG_MIN`, `LLONG_MAX`

### 🔐 Constraint Check:

```cpp
if (rev > LLONG_MAX / 10 || (rev == LLONG_MAX / 10 && digit > 7)) return 0;
if (rev < LLONG_MIN / 10 || (rev == LLONG_MIN / 10 && digit < -8)) return 0;
```

---

## ✅ 5. **unsigned long long (64-bit unsigned)**

* **Range:** `0` to `18,446,744,073,709,551,615`
* **Max:** `ULLONG_MAX = 2^64 - 1`

### 🔐 Constraint Check:

```cpp
if (rev > ULLONG_MAX / 10 || (rev == ULLONG_MAX / 10 && digit > 5)) return 0;
```

---

## ✅ 6. **short (16-bit signed)**

* **Range:** `−32,768` to `32,767`
* **Max:** `SHRT_MAX`, `SHRT_MIN`

### 🔐 Constraint Check:

```cpp
if (rev > SHRT_MAX / 10 || (rev == SHRT_MAX / 10 && digit > 7)) return 0;
if (rev < SHRT_MIN / 10 || (rev == SHRT_MIN / 10 && digit < -8)) return 0;
```

---

## ✅ 7. **char (8-bit signed)**

* **Range:** `-128` to `127`
* **Max:** `CHAR_MAX = 127`, `CHAR_MIN = -128`

### 🔐 Constraint Check:

```cpp
if (rev > CHAR_MAX / 10 || (rev == CHAR_MAX / 10 && digit > 7)) return 0;
if (rev < CHAR_MIN / 10 || (rev == CHAR_MIN / 10 && digit < -8)) return 0;
```

---

## 🧠 General Pattern (Reusable Rule)

For **any integer type**:

```cpp
// Avoiding overflow before doing: rev = rev * 10 + digit;

if (rev > TYPE_MAX / 10 || (rev == TYPE_MAX / 10 && digit > TYPE_MAX % 10)) return 0;
if (rev < TYPE_MIN / 10 || (rev == TYPE_MIN / 10 && digit < TYPE_MIN % 10)) return 0;
```

---

## 📄 Want This as a Cheat Sheet?

Would you like me to prepare this as a **PDF or printable table** you can quickly refer to while solving problems?

Also let me know if you'd like the same thing for **floating point types (`float`, `double`)** or for **modular arithmetic constraints** (common in CP).
