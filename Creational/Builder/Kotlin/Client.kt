fun main() {

    var abstractBuilder:AbstractBuilder = ConcreteBuilder1()
    abstractBuilder.reset()
    abstractBuilder.buildStepA()
    abstractBuilder.buildStepB()
    abstractBuilder.buildStepC()

    var abstractProduct = abstractBuilder.getProduct()
    abstractProduct.operation()


    abstractBuilder = ConcreteBuilder2()
    abstractBuilder.reset()
    abstractBuilder.buildStepA()
    abstractBuilder.buildStepC()

    abstractProduct = abstractBuilder.getProduct()
    abstractProduct.operation()


}