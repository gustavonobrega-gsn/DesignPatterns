
public abstract class AbstractFactory {

	abstract AbstractProduct factoryMethod();
	
	void operation() {
		AbstractProduct abstractProduct = factoryMethod();
		abstractProduct.operation();
	}
}
