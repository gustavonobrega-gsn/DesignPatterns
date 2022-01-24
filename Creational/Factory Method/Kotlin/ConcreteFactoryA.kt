class ConcreteFactoryA: AbstractFactory(){

    override fun factoryMethod(): AbstractProduct {
        return ConcreteProductA()
    }
}