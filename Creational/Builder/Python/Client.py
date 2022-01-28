from ConcreteBuilder1 import *
from ConcreteBuilder2 import *
from AbstractProduct import *

if __name__ == '__main__':

	abstract_builder = ConcreteBuilder1()
	abstract_builder.reset()
	abstract_builder.build_step_a()
	abstract_builder.build_step_b()
	abstract_builder.build_step_c()
	
	abstract_product = abstract_builder.get_product()
	abstract_product.operation()
	
	abstract_builder = ConcreteBuilder2()
	abstract_builder.reset()
	abstract_builder.build_step_a()
	abstract_builder.build_step_c()
	
	abstract_product = abstract_builder.get_product()
	abstract_product.operation()