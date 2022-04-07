package main

import "fmt"

type ConcreteProductB_2 struct{}

func NewConcreteProductB_2() AbstractProductB {
	return &ConcreteProductB_2{}
}

func (*ConcreteProductB_2) OperationB() {
	fmt.Println("Operation from ConcreteProductB_2")
}
