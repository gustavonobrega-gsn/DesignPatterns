package main

import (
	"fmt"
)

type ConcreteProductB struct{}

func (*ConcreteProductB) operation() {
	fmt.Println("ProductB doing operation")
}
