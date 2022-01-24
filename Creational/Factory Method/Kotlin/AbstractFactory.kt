abstract class AbstractFactory {

    abstract fun factoryMethod(): AbstractProduct

    fun operation(){
        val abstractProduct = factoryMethod()
        abstractProduct.operation()
    }

}