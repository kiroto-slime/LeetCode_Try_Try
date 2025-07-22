class Solution {
public:
    int myAtoi(const string& s) {
        const char* p= s.c_str(); //Get string pointer.
        while (*p== ' ') {++p;}

        char* end; //First not int.
        long val= strtol(p, &end, 10); // (string, Not int, Base)

        if (p== end) {return 0;}
        if (val>INT_MAX) {return INT_MAX;}
        if (val<INT_MIN) {return INT_MIN;}

        return static_cast<int>(val);
    }
};
