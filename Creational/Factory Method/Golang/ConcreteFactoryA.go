package main

type ConcreteFactoryA struct{

}

func (ConcreteFactoryA) factoryMethod() AbstractProduct{
	return &ConcreteProductA{}
}

func (concreteFactoryA ConcreteFactoryA) operation(){
	var abstractProduct AbstractProduct = concreteFactoryA.factoryMethod()
	abstractProduct.operation()
}