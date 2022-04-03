package main

type ConcreteFactoryB struct{

}

func (ConcreteFactoryB) factoryMethod() AbstractProduct{
	return &ConcreteProductB{}
}

func (concreteFactoryB ConcreteFactoryB) operation(){
	var abstractProduct AbstractProduct = concreteFactoryB.factoryMethod()
	abstractProduct.operation()
}