class ConcreteProduct2: AbstractProduct() {

    override fun stepA1() {
    }

    override fun stepA2() {
        this.stringSet.add("stepA2")
    }

    override fun stepB1() {
    }

    override fun stepB2() {
        this.stringSet.add("stepB2")
    }

    override fun stepC1() {
    }

    override fun stepC2() {
        this.stringSet.add("stepC2")
    }

}