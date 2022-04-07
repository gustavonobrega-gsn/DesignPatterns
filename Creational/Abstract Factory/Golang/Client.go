package main

func main() {
	var abstFactory AbstractFactory = NewConcreteFactory1()
	var abstProductA AbstractProductA = abstFactory.CreateProductA()
	var abstProductB AbstractProductB = abstFactory.CreateProductB()
	var abstProductC AbstractProductC = abstFactory.CreateProductC()

	abstProductA.OperationA()
	abstProductB.OperationB()
	abstProductC.OperationC()

	abstFactory = NewConcreteFactory2()
	abstProductA = abstFactory.CreateProductA()
	abstProductB = abstFactory.CreateProductB()
	abstProductC = abstFactory.CreateProductC()

	abstProductA.OperationA()
	abstProductB.OperationB()
	abstProductC.OperationC()
}
