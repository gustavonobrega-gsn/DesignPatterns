
public class ConcreteFactoryA extends AbstractFactory{

	@Override
	AbstractProduct factoryMethod() {
		return new ConcreteProductA();
	}

}
