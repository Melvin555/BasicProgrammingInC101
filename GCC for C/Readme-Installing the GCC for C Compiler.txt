1. Run mingw-get-setup.exe
In the installation query, choose mingw32-gcc-g++

2. Follow the procedure until everything is installed in C:/MinGW

3. Add 'C:/MinGW/bin' to the PATH

Test if your GCC can be recognize by the system: input 'gcc -v' in the terminal to check gcc version

To run GCC from the terminal, open command prompt, run (example)
'gcc -o output.exe source.c' to compile it

Note: 
Full ready version is availble in MinGW-V5.1.6.rar

-------------------------------------------------------------------------------------------------------------------

!For VS Code users only!

If there is a problem with the installation of 'C/C++ Extension', please use the 
cpptools-win32.vsix file to install the extension.
Go to Extension tab. On the right side of the search bar of Extension search bar (more options),
choose 'Install from VSIX' then search for the cpptools-win32.vsix to completely install the package.

