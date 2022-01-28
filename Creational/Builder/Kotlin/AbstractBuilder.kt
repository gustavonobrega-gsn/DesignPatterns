abstract class AbstractBuilder {

    protected lateinit var abstractProduct: AbstractProduct

    fun getProduct(): AbstractProduct{
        return this.abstractProduct
    }

    abstract fun reset()
    abstract fun buildStepA()
    abstract fun buildStepB()
    abstract fun buildStepC()

}