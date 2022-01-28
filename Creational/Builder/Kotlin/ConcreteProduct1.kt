class ConcreteProduct1: AbstractProduct() {

    override fun stepA1() {
        this.stringSet.add("stepA1")
    }

    override fun stepA2() {
    }

    override fun stepB1() {
        this.stringSet.add("stepB1")
    }

    override fun stepB2() {
    }

    override fun stepC1() {
        this.stringSet.add("stepC1")
    }

    override fun stepC2() {
    }

}