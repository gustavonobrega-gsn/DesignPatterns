package main

import "fmt"

type ConcreteProductC_2 struct{}

func NewConcreteProductC_2() AbstractProductC {
	return &ConcreteProductC_2{}
}

func (*ConcreteProductC_2) OperationC() {
	fmt.Println("Operation from ConcreteProductC_2")
}
