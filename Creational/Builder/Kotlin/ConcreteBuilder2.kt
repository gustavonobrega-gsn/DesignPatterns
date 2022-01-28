class ConcreteBuilder2: AbstractBuilder() {

    override fun reset() {
        this.abstractProduct = ConcreteProduct2()
    }

    override fun buildStepA() {
        this.abstractProduct.stepA2()
    }

    override fun buildStepB() {
        this.abstractProduct.stepB2()
    }

    override fun buildStepC() {
        this.abstractProduct.stepC2()
    }

}