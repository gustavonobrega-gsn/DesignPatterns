package main

import "fmt"

type ConcreteProductC_1 struct{}

func NewConcreteProductC_1() AbstractProductC {
	return &ConcreteProductC_1{}
}

func (*ConcreteProductC_1) OperationC() {
	fmt.Println("Operation from ConcreteProductC_1")
}
