gcc -shared -o libcrypt.so -fPIC crypto.c
gcc main.c -L. -lcrypt -o encrypt_decrypt
./encrypt_decrypt
