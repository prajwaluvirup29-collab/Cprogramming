

# 📘 **README.md (For Above Program)**

```
# Length of Integer Array and Character Array in C

This program demonstrates how to find the length of:

- An **integer array**
- A **character array (string)**

## 🔍 Logic Used

### ✔ Integer Array Length
```

length = sizeof(array) / sizeof(array[0]);

```

### ✔ Character Array Length (string)
```

length = sizeof(array) - 1;   // remove null '\0'

```

## 📌 Output Example
```

Length of int array = 5
Length of char array = 7

```

## 🏁 Compile & Run
```

gcc array_length.c -o array_length
./array_length


