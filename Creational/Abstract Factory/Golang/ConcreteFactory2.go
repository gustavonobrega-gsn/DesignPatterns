package main

type ConcreteFactory2 struct{}

func NewConcreteFactory2() AbstractFactory {
	return &ConcreteFactory2{}
}

func (*ConcreteFactory2) CreateProductA() AbstractProductA {
	return &ConcreteProductA_2{}
}

func (*ConcreteFactory2) CreateProductB() AbstractProductB {
	return &ConcreteProductB_2{}
}

func (*ConcreteFactory2) CreateProductC() AbstractProductC {
	return &ConcreteProductC_2{}
}
