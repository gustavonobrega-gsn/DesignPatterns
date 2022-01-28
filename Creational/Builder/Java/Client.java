
public class Client {

	public static void main(String[] args) {
		
		AbstractBuilder abstractBuilder = new ConcreteBuilder1();
		abstractBuilder.reset();
		abstractBuilder.buildStepA();
		abstractBuilder.buildStepB();
		abstractBuilder.buildStepC();
		
		AbstractProduct abstractProduct = abstractBuilder.getProduct();
		abstractProduct.operation();
		

		
		abstractBuilder = new ConcreteBuilder2();
		abstractBuilder.reset();
		abstractBuilder.buildStepA();
		abstractBuilder.buildStepC();
		
		abstractProduct = abstractBuilder.getProduct();
		abstractProduct.operation();
	}

}
