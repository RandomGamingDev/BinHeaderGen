# BinHeaderGen
A simple 1 file program for loading binary files into a header file that gets compiled directly into the executable.

These headers can be used for C/C++

In the header the binary data is stored in the form of a string with each character representing a byte since C/C++ uses ASCII for characters which uses a byte for each character. This makes it not only easy for manipulation, but also really compacts since there's no need for things like commas inbetween, as it's just the pure binary data put inbetween 2 strings that turn it into a valid header.

Want to incorporate a file into your executable without a file? <br/>
Use this! <br/>
Simply compile using your favorite C++ 20 compiler (because it's just 1 file you can literally just use g++) <br/>
Then run the executable with a parameter like this: ./\<exec name\> \<file path\> <br/>
Then it'll generate `header.h` (remember to change the names and use namespaces wherever you want those) <br/>
Enjoy! <br/>
  
Storing data this way is perfect for:<br/>
- Avoiding file reading especially for systems where that may not be possible or for avoiding the inherent cost that comes with file reading
- Keeping things in a single executable
- Making sure that people don't actually break stuff by messing with files
- Making certain data harder to access
