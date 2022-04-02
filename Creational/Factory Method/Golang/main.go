package main

func main() {

	var abstFactory AbstractFactory = ConcreteFactoryA{}
	abstFactory.operation()

	abstFactory = ConcreteFactoryB{}
	abstFactory.operation()
}
