What are the values in the following arrays?
```cpp
string sa[10];
int ia[10];
int main() {
    string sa2[10];
    int    ia2[10];
    return 0;
}
```
All the strings in sa and sa2 will get the default null value i.e. empty strings.  
The integers in ia will all be set to 0.  
The integers in ia2 will have undefined values because ia2 is defined inside of a function.
