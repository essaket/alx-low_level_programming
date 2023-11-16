section		.text
	  global    main
          extern    printf
main:
	  mov   edi, hicham
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ref
section		.data
	  hicham db `Hello, Holberton`, 0xa, 0
