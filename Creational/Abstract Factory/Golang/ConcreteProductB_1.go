package main

import "fmt"

type ConcreteProductB_1 struct{}

func NewConcreteProductB_1() AbstractProductB {
	return &ConcreteProductB_1{}
}

func (*ConcreteProductB_1) OperationB() {
	fmt.Println("Operation from ConcreteProductB_1")
}
