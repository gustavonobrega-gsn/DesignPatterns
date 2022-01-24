class ConcreteFactoryB: AbstractFactory() {

    override fun factoryMethod(): AbstractProduct{
        return ConcreteProductB()
    }
}