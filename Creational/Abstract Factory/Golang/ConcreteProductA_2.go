package main

import "fmt"

type ConcreteProductA_2 struct{}

func NewConcreteProductA_2() AbstractProductA {
	return &ConcreteProductA_2{}
}

func (*ConcreteProductA_2) OperationA() {
	fmt.Println("Operation from ConcreteProductA_2")
}
