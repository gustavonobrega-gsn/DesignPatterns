
public class ConcreteProduct1 extends AbstractProduct{

	@Override
	public void stepA1() {
		this.string_set.add("stepA1");
	}

	@Override
	public void stepA2() {
	}

	@Override
	public void stepB1() {
		this.string_set.add("stepB1");
	}

	@Override
	public void stepB2() {
	}

	@Override
	public void stepC1() {
		this.string_set.add("stepC1");
	}

	@Override
	public void stepC2() {
	}

}
