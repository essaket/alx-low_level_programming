 global    main
          extern    printf
main:
	  mov   edi, hicham
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
hicham: db `Hello, Holberton\n`,0
