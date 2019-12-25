package main

/*
#cgo CFLAGS: -I./
#cgo LDFLAGS: -L./
#include "math.h"
*/
import "C"

import "fmt"

func main(){
	fmt.Println("I am go!")
	a := C.add(1, 2)

	fmt.Println("return from c/c++ = ", a)
}