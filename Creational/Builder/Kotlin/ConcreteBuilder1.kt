class ConcreteBuilder1: AbstractBuilder() {

    override fun reset() {
        this.abstractProduct = ConcreteProduct1()
    }

    override fun buildStepA() {
        this.abstractProduct.stepA1()
    }

    override fun buildStepB() {
        this.abstractProduct.stepB1()
    }

    override fun buildStepC() {
        this.abstractProduct.stepC1()
    }

}