
public class ConcreteFactoryB extends AbstractFactory{

	@Override
	AbstractProduct factoryMethod() {
		return new ConcreteProductB();
	}

}
