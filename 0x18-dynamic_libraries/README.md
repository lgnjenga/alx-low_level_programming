## 0x18. C - Dynamic libraries
### Dynamic Library Creation Script
- This project contains a bash script that automates the process of creating a dynamic library called liball.so from all the .c files in the current directory.

**Script: `create_lib.sh`**
**Usage:**
1. Ensure the script is executable: `chmod +x create_lib.sh`
2. Run the script in the directory containing your `.c` files: `./create_lib.sh`

**What it does:**

1. Compiles all the `.c` files in the directory.
2. Creates a dynamic library `liball.so` from the compiled object files.
3. Cleans up the object files after library creation.

Instructions:
1. Save the bash script in a file, let's name it `create_lib.sh.`
2. Make the script executable: `chmod +x create_lib.sh.`
3. Save the README content in a file named `README.md` in the root of your project directory.

Now you can run the script in any directory containing `.c` files to create the dynamic library.
