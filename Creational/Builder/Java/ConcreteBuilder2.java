
public class ConcreteBuilder2 extends AbstractBuilder{

	@Override
	public void reset() {
		this.abstractProduct = new ConcreteProduct2();
		
	}

	@Override
	public void buildStepA() {
		this.abstractProduct.stepA2();
	}

	@Override
	public void buildStepB() {
		this.abstractProduct.stepB2();
		
	}

	@Override
	public void buildStepC() {
		this.abstractProduct.stepC2();
	}

}
