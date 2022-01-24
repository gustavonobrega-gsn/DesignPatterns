fun main() {

    var abstractFactory: AbstractFactory

    abstractFactory = ConcreteFactoryA()
    abstractFactory.operation()

    abstractFactory = ConcreteFactoryB()
    abstractFactory.operation()
}