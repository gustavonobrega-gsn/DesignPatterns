from AbstractBuilder import *
from ConcreteProduct2 import *

class ConcreteBuilder2(AbstractBuilder):

	def reset(self):
		self.product = ConcreteProduct2()
		return 
		
	def build_step_a(self):
		self.product.step_a_2()
		
	def build_step_b(self):
		self.product.step_b_2()
		
	def build_step_c(self):
		self.product.step_c_2()