# C++ Experiment 3: Data Sharing and Protection

## Files

- `01_static_data_member.cpp`: shared static data member
- `02_student_count.cpp`: student numbering with a static counter
- `03_static_member_function.cpp`: static member function
- `04_scope_5_3.cpp`: scope and local-variable hiding
- `05_cat_5_7.cpp`: static member data and member function
- `06_friend_access.h`, `06_friend_access.cpp`, `06_friend_access_main.cpp`: friend functions and friend class

## Build

Compile each of the first five programs separately, for example:

```bash
g++ -std=c++11 01_static_data_member.cpp -o 01_static_data_member
```

Compile the final multi-file exercise with:

```bash
g++ -std=c++11 06_friend_access.cpp 06_friend_access_main.cpp -o 06_friend_access
```
