# Bitnine Coding Assignment
- **This is a coding interview for the Bitnine Software Engineer Internship**

# Question 1
## Development Environment and Compilation Instructions
- This README provides instructions on how to compile and run the given source code in both Visual Studio Code and the Windows Command Prompt or PowerShell.
- The development environment assumes the use of Visual Studio Code on Windows 10 with the msys64 compiler for C and C++.

## Development Environment
**To set up the development environment, follow these steps:**

- Install Visual Studio Code: Download and install Visual Studio Code from the official website at code.visualstudio.com.

- Install the C/C++ extension: Launch Visual Studio Code, open the Extensions view (Ctrl+Shift+X), and search for "C/C++" in the marketplace. Install the extension provided by Microsoft.

- Install msys64 compiler: Download and install msys64 from the official website at www.msys2.org. Follow the installation instructions provided on the website.

- Configure Visual Studio Code for msys64: Open Visual Studio Code and press Ctrl+Shift+P to open the command palette. Type "C/C++: Edit Configurations (UI)" and select the option. Add a new configuration by selecting "gcc.exe" as the compiler path and "msys64" as the environment.

- Open the project folder: In Visual Studio Code, open the folder containing the source code files.

**With the development environment set up, you can now compile and run the code.**

## Compilation and Execution
### Visual Studio Code
- Open the terminal: Press Ctrl+` or go to View > Terminal to open the integrated terminal in Visual Studio Code.

- Build the code: In the terminal, navigate to the project folder where the source code files are located. Use the cd command to change directories. For example:

```powershell
cd path/to/project/folder
```

- Compile the code: Use the following command to compile the code using the msys64 compiler:
```powershell
gcc node.c -o node
```

- Run the program: After successful compilation, execute the program by running the following command:
```bash
./node
```

### Windows Command Prompt or PowerShell
- Open the Command Prompt or PowerShell: Press Win+R, type "cmd" or "powershell", and press Enter to open the respective command-line interface.

- Navigate to the project folder: Use the cd command to navigate to the project folder where the source code files are located. For example:

```powershell
cd path\to\project\folder
```

- Compile the code: Use the following command to compile the code using the msys64 compiler:
```powershell
gcc node.c -o node
```

- Run the program: After successful compilation, execute the program by running the following command:
```powershell
.\node.exe
```

### Output
- Upon running the program, it will calculate and display the results of the "add," "mul," "sub," and "fib" operations based on the provided input values. The output will be shown in the command-line interface.

**Example output:**

```makefile
add: 16
mul: 20
sub: 4
fib: 8
```

### **Congratulations!**
You have successfully compiled and executed the given source code using both Visual Studio Code and the Windows Command Prompt or PowerShell.
