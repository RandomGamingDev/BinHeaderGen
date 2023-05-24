# BinHeaderGen
A simple 1 file program for loading binary files into a header file that gets compiled directly into the executable.

These headers can be used for C/C++

Want to incorporate a file into your executable without a file? <br/>
Use this! <br/>
Simply compile using your favorite C++ 20 compiler (because it's just 1 file you can literally just use g++) <br/>
Then run the executable with a parameter like this: ./<exec name> <file path> <br/>
Then it'll generate `header.h` (remember to change the names and use namespaces wherever you want those) <br/>
Enjoy! <br/>
  
Storing data this way is perfect for:<br/>
- Avoiding file reading especially for systems where that may not be possible or for avoiding the inherent cost that comes with file reading
- Keeping things in a single executable
- Making sure that people don't actually break stuff by messing with files
- Making files harder to access
