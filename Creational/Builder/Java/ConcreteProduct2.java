
public class ConcreteProduct2 extends AbstractProduct{

	@Override
	public void stepA1() {
	}

	@Override
	public void stepA2() {
		this.string_set.add("stepA2");
	}

	@Override
	public void stepB1() {
	}

	@Override
	public void stepB2() {
		this.string_set.add("stepB2");
	}

	@Override
	public void stepC1() {
	}

	@Override
	public void stepC2() {
		this.string_set.add("stepC2");
	}

}
