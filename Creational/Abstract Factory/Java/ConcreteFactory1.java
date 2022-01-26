
public class ConcreteFactory1 implements AbstractFactory {

	@Override
	public AbstractProductA createProductA() {
		return new ConcreteProductA_1();
	}

	@Override
	public AbstractProductB createProductB() {
		return new ConcreteProductB_1();
	}

	@Override
	public AbstractProductC createProductC() {
		return new ConcreteProductC_1();
	}
	
}
