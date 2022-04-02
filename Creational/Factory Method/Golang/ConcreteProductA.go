package main

import (
	"fmt"
)

type ConcreteProductA struct{}

func (concreteProductA *ConcreteProductA) operation() {
	fmt.Println("ProductA doing operation")
}
