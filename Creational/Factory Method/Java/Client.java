
public class Client {

	public static void main(String[] args) {
		
		AbstractFactory abstractFactory;
		
		abstractFactory = new ConcreteFactoryA();
		abstractFactory.operation();
		
		abstractFactory = new ConcreteFactoryB();
		abstractFactory.operation();

	}

}
