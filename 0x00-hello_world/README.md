0x00-hello_world

Normally, when you invoke GCC, it normally does preprocessing, compilation, assebly and linking. But the "overall options" allow you to stop this process at an intermediate stage.  For example,


-The E option (gcc -E) says to runs a C file through just the preprocessor, and have the output saved in the stdio.h but the task request that the C file name be saved in the variable $CFILE and the output, be saved in the file c.
The script thus: gcc -E $CFILE -c (for the 0-preprocessor task)

-The  c option (gcc -c ) says compile and assemply but not to run the linker.  Then the output consists of OBJECT  files output by the assembler (saved in a variable $CFILE).
The scrypt thus: gcc -c $CFILE (for the 1-compiler task)

                                         
-The S option (gcc -S) says Compile only; do not assemble or link. Meaning, generate assebly code only. Note that the C file from which the assembly code will be generated, be saved in the variable, $CFILE.
The script thus: gcc -S $CFILE (for the 2-assembler task)

-The -o option (gcc -o) compiles a C file and Place the output into <file>. The taske requires that you create the executable file named cisfun and as in the previous cases the C compiled file file is saved in the variable $CFILE.
The script thus: gcc $CFILE -o cisfun  

