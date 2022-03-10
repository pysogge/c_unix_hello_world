# C Language Hello World

## Compile
```bash
gcc hello_world.c -o ./exec/hello_world.out

gcc linecount.c -o ./exec/linecount.out

## Compile and run with an input file
sh ./build/script.sh -x linecount

## Compile and run with no input file
sh ./build/script.sh -c fibonacci

## Compile only
sh ./build/script.sh -s fibonacci

## Run only
sh ./build/script.sh -r fibonacci
```

## Run
```bash
cat linecount.txt | ./exec/linecount.out
```

## See Assembly Output (Unix)
```bash
otool -tv hello_world.out
```

## Projects

#### Hello World
```bash
gcc hello_world.c -o ./exec/hello_world.out
./exec/hello_world.out
```

#### Temperature Table
```bash
gcc temperature_table.c -o temperature_table.out
./temperature_table.out
```

#### Fibonacci
```bash
gcc fibonacci.c -o fibonacci.out
./fibonacci.out
```