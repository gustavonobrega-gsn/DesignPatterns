
public abstract class AbstractBuilder {
	
	protected AbstractProduct abstractProduct;

	public AbstractProduct getProduct() {
		return this.abstractProduct;
	}
	
	public abstract void reset();
	public abstract void buildStepA();
	public abstract void buildStepB();
	public abstract void buildStepC();
}
