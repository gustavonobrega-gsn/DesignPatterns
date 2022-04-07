package main

import "fmt"

type ConcreteProductA_1 struct{}

func NewConcreteProductA_1() AbstractProductA {
	return &ConcreteProductA_1{}
}

func (*ConcreteProductA_1) OperationA() {
	fmt.Println("Operation from ConcreteProductA_1")
}
