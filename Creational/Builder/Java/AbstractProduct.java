import java.util.HashSet;
import java.util.Set;

public abstract class AbstractProduct {
	
	protected Set<String> string_set;
	
	protected AbstractProduct() {
		this.string_set = new HashSet<>();
	}
	
	public void operation() {
		
		for (String string : string_set) {
			System.out.print(string + " ");
		}
		
		System.out.println();
	}
	
	public abstract void stepA1();
	public abstract void stepA2();
	public abstract void stepB1();
	public abstract void stepB2();
	public abstract void stepC1();
	public abstract void stepC2();

}
