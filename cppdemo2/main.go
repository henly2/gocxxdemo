package main

/*
#cgo CFLAGS: -Iinclude
#cgo LDFLAGS: -Llib -lmath -lstdc++
#include "math.h"
*/
import "C"

import "fmt"

func main(){
	fmt.Println("I am go!")
	a := C.add(1, 2)

	fmt.Println("return from c/c++ = ", a)

	var cc C.int
	b := C.dosomething(&cc)
	fmt.Println(b, cc)

	b = C.dosomething(&cc)
	fmt.Println(b, cc)

	b = C.dosomething(&cc)
	fmt.Println(b, cc)
}