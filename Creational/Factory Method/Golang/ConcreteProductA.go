package main

import (
	"fmt"
)

type ConcreteProductA struct{}

func (*ConcreteProductA) operation() {
	fmt.Println("ProductA doing operation")
}
