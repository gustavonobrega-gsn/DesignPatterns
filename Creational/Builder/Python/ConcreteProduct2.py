from AbstractProduct import *

class ConcreteProduct2(AbstractProduct):

	def step_a_1(self):
		pass
		
	def step_a_2(self):
		self.string_set.add("step_a_2")
	
	def step_b_1(self):
		pass
	
	def step_b_2(self):
		self.string_set.add("step_b_2")
	
	def step_c_1(self):
		pass
	
	def step_c_2(self):
		self.string_set.add("step_c_2")