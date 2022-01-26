class ConcreteFactory2: AbstractFactory {

    override fun createProductA(): AbstractProductA {
        return ConcreteProductA2()
    }

    override fun createProductB(): AbstractProductB {
        return ConcreteProductB2()
    }

    override fun createProductC(): AbstractProductC {
        return ConcreteProductC2()
    }

}