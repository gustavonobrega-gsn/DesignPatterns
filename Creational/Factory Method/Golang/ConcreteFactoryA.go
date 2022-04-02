package main

type ConcreteFactoryA struct{

}

func (concreteFactoryA ConcreteFactoryA) factoryMethod() AbstractProduct{
	return &ConcreteProductA{}
}

func (concreteFactoryA ConcreteFactoryA) operation(){
	var abstractProduct AbstractProduct = concreteFactoryA.factoryMethod()
	abstractProduct.operation()
}