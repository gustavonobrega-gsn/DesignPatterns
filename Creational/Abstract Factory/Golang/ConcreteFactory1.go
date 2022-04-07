package main

type ConcreteFactory1 struct{}

func NewConcreteFactory1() AbstractFactory {
	return &ConcreteFactory1{}
}

func (*ConcreteFactory1) CreateProductA() AbstractProductA {
	return &ConcreteProductA_1{}
}

func (*ConcreteFactory1) CreateProductB() AbstractProductB {
	return &ConcreteProductB_1{}
}

func (*ConcreteFactory1) CreateProductC() AbstractProductC {
	return &ConcreteProductC_1{}
}
