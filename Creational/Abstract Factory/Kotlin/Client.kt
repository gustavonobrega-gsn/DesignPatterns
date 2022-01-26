fun main() {

    var abstractFactory: AbstractFactory

    var abstractProductA: AbstractProductA
    var abstractProductB: AbstractProductB
    var abstractProductC: AbstractProductC

    abstractFactory = ConcreteFactory1()

    abstractProductA = abstractFactory.createProductA()
    abstractProductB = abstractFactory.createProductB()
    abstractProductC = abstractFactory.createProductC()

    abstractProductA.operationA()
    abstractProductB.operationB()
    abstractProductC.operationC()



    abstractFactory = ConcreteFactory2()

    abstractProductA = abstractFactory.createProductA()
    abstractProductB = abstractFactory.createProductB()
    abstractProductC = abstractFactory.createProductC()

    abstractProductA.operationA()
    abstractProductB.operationB()
    abstractProductC.operationC()

}