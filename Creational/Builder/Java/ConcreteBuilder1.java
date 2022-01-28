
public class ConcreteBuilder1 extends AbstractBuilder{

	@Override
	public void reset() {
		this.abstractProduct = new ConcreteProduct1();
		
	}

	@Override
	public void buildStepA() {
		this.abstractProduct.stepA1();
	}

	@Override
	public void buildStepB() {
		this.abstractProduct.stepB1();
		
	}

	@Override
	public void buildStepC() {
		this.abstractProduct.stepC1();
	}

}
