# Card-Games
College project

## FreeCell

To compile and run FreeCell use the following command in Unix-like OS
```
gcc -O2 -pipe -Wall -Wextra -std=c11 FreeCell/main.c FreeCell/Card/*.c FreeCell/Stack/*.c -o FreeCell/freecell && FreeCell/freecell && rm FreeCell/freecell
```

To see memory leaks with Valgrind
```
gcc -g -O1 FreeCell/main.c -pipe -Wall -Wextra -std=c11 FreeCell/Card/*.c FreeCell/Stack/*.c -o FreeCell/freecell && valgrind --leak-check=yes FreeCell/freecell && rm FreeCell/freecell
```
