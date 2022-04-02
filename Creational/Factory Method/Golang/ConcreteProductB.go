package main

import (
	"fmt"
)

type ConcreteProductB struct{}

func (concreteProductB *ConcreteProductB) operation() {
	fmt.Println("ProductB doing operation")
}