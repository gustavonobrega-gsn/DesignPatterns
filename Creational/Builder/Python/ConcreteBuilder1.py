from AbstractBuilder import *
from ConcreteProduct1 import *

class ConcreteBuilder1(AbstractBuilder):

	def reset(self):
		self.product = ConcreteProduct1()
		return 
		
	def build_step_a(self):
		self.product.step_a_1()
		
	def build_step_b(self):
		self.product.step_b_1()
		
	def build_step_c(self):
		self.product.step_c_1()