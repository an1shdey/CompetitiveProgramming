# Sublime Text - CP setup

## 1. Windows C++ Build

```json
{
    "cmd": [
        "g++.exe",
        "-std=c++14",
        "-D_DEBUG",
        "${file}",
        "-o",
        "${file_base_name}.exe",
        "&&",
        "${file_base_name}.exe\\<input.txt>output.txt"
    ],
    "selector": "source.cpp",
    "shell": true,
    "working_dir": "$file_path"
}
```

### Compile `stdc++.h` on Windows

```powershell
PS C:\MinGW\lib\gcc\mingw32\6.3.0\include\c++\mingw32\bits> g++ -std=c++14 stdc++.h
```

---

## 2. Linux C++ Build

```json
{
    "cmd": [
        "g++ -std=c++20 -D_DEBUG $file_name -o $file_base_name && timeout 4s ./$file_base_name\\<input.txt>output.txt"
    ],
    "selector": "source.c",
    "shell": true,
    "working_dir": "$file_path"
}
```

### Compile `stdc++.h` on Linux

```bash
sudo g++ -std=c++20 /usr/include/x86_64-linux-gnu/c++/13/bits/stdc++.h
```

---

## 3. Debugger

```cpp
#ifdef _DEBUG
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void _print(int t) {cerr << t;}
void _print(ll t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
```

### Inside `int main()`

```cpp
#ifdef _DEBUG
freopen("error.txt", "w", stderr);
#endif
```

---

## 4. Runtime Timer

Add this namespace:

```cpp
using namespace chrono;
```

Add the following around the code you want to time inside `int main()`:

```cpp
  //fastio
  
  auto start1 = high_resolution_clock::now();

  //solve()

  auto stop1 = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop1 - start1);

#ifdef _DEBUG
cerr << '\n' << "Time: " << duration.count() / 1000 << endl;
#endif
```

---

## 5. Timestamp Comment

```cpp
// TIMESTAMP comment
```