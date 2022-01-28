abstract class AbstractProduct {

    protected var stringSet = mutableSetOf<String>()

    fun operation() {
        println(this.stringSet.toString())
    }

    abstract fun stepA1()
    abstract fun stepA2()
    abstract fun stepB1()
    abstract fun stepB2()
    abstract fun stepC1()
    abstract fun stepC2()

}