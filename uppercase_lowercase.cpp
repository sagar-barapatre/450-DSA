#include <algorithm>

string su = "Sagar Barapatre";

// using transform() function and ::toupper in STL
transform(su.begin(), su.end(), su.begin(), ::toupper);
cout << su << endl; // SAGAR BARAPATRE

// sl is the string which is converted to lowercase
string sl = "Sagar Barapatre";

// using transform() function and ::tolower in STL
transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
cout << sl << endl; // sagar barapatre