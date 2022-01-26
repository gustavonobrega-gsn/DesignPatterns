
public class ConcreteFactory2 implements AbstractFactory {

	@Override
	public AbstractProductA createProductA() {
		return new ConcreteProductA_2();
	}

	@Override
	public AbstractProductB createProductB() {
		return new ConcreteProductB_2();
	}

	@Override
	public AbstractProductC createProductC() {
		return new ConcreteProductC_2();
	}
	
}
