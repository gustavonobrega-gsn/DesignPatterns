
public class Client {

	public static void main(String[] args) {
		
		AbstractFactory abstractFactory;
		
		AbstractProductA abstractProductA;
		AbstractProductB abstractProductB;
		AbstractProductC abstractProductC;
		
		
		abstractFactory = new ConcreteFactory1();
		
		abstractProductA = abstractFactory.createProductA();
		abstractProductB = abstractFactory.createProductB();
		abstractProductC = abstractFactory.createProductC();
		
		abstractProductA.operationA();
		abstractProductB.operationB();
		abstractProductC.operationC();
		
		
		
		abstractFactory = new ConcreteFactory2();
		
		abstractProductA = abstractFactory.createProductA();
		abstractProductB = abstractFactory.createProductB();
		abstractProductC = abstractFactory.createProductC();
		
		abstractProductA.operationA();
		abstractProductB.operationB();
		abstractProductC.operationC();
	}

}
